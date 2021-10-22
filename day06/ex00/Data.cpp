#include "Data.hpp"


void    Data::Parsetype()
{
    int i;
    int lenght;

    i = 0;
    lenght = str.length();

    if(lenght == 1 && !(isdigit(str[0])))
    {
        this->type = "char";
        return;
    }
    else if (str == "+inff" || str == "-inff" || str == "nanf")
	{
		this->type = "float";
		T_impossible = true;
		return;
	}
	else if (str == "+inf" || str == "-inf" || str == "nan")
	{
		this->type = "double";
		T_impossible = true;
		return;
	}
    if (str[i] == '+' || str[i] == '-')
		i++;
    this->type = "int";
	if (this->point == 1 && str[lenght - 1] == 'f')
		this->type = "float";
	else if (this->point == 1  && (std::isdigit(str[lenght - 1]) || (str[lenght - 1] == '.')))
		this->type = "double";
}

int Data::check_error()
{
    int lengt = str.length();
    int i = 0;
    int sign = 0;
    int there_is_digit = 0;
    int there_is_char = 0;

    if (str == "+inff" || str == "-inff" || str == "nanf" || str == "+inf" || str == "-inf" || str == "nan")
    {
        return (0);
    }
    while (str[i])
    {
        if(i != 0 && (str[i] == '-' || str[i] == '+'))
            sign++;
        else if(str[i] == '.')
            this->point++;
        else if(isdigit(str[i]))
            there_is_digit = 1;
        else if(!(isdigit(str[i])) && (str[i] != '-' && str[i] != '+'))
        {
            if(!(i == lengt-1 && str[i] =='f'))
                there_is_char = 1;
        }
        i++;
    }
    if(lengt != 1 and there_is_digit == 0)
        return (1);
    if(sign != 0)
        return (1);
    if(this->point > 1)
        return (1);
    if(there_is_char == 1 && there_is_digit == 1)
        return (1);
    return (0);
}
Data::Data()
{
    this->T_impossible = false;
    this->there_is_point = false;
    this->T_indisponible = false;
    this->point = 0;
}
Data::Data(std::string str)
{
    this->T_impossible = false;
    this->there_is_point = false;
    this->point = 0;
    this->T_indisponible = false;
    this->str = str;
}
Data::~Data()
{
}
void Data::SetTypes()
{
	// std::string str = getValue();
	if (this->type == "char")
	{
		v_char = str[0];
		v_int = static_cast<int>(v_char);
		v_float = static_cast<float>(v_char);
		v_double = static_cast<double>(v_char);

		if (!std::isprint(v_int))
			T_indisponible = true;
	}
	else if (this->type == "int")
	{
		try
		{
			v_int = std::atoi(str.c_str());
		}
		catch (const std::exception &e)
		{
			T_impossible = true;
		}
		v_char = static_cast<char>(v_int);
		v_float = static_cast<float>(v_int);
		v_double = static_cast<double>(v_int);
		if (!std::isprint(v_int))
		{
			T_indisponible = true;
		}
	}
	else if (this->type == "float")
	{

		v_float = std::atof(str.c_str());
		v_int = static_cast<int>(v_float);

		v_double = static_cast<double>(v_float);
		v_char = static_cast<char>(v_float);

		if (!std::isprint(v_int))
		{
			T_indisponible = true;
		}
	}
	else if (this->type == "double")
	{
		v_double = atof(str.c_str());
		v_float = static_cast<float>(v_double);
		v_int = static_cast<float>(v_double);
		v_char = static_cast<float>(v_double);
		if (!std::isprint(v_int))
			T_indisponible = true;
	}
}

void Data::printChar() const
{
	if (T_impossible)
		std::cout << "char: impossible" << std::endl;
	else if (T_indisponible)
		std::cout << "char: : Non displayable" << std::endl;
	else
		std::cout << "char: '" << v_char << "'" << std::endl;
}

void Data::printInt() const
{
	if (T_impossible)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << v_int << std::endl;
}

void Data::printFloat() const
{
	std::cout << "float: " << std::fixed << std::setprecision(precesion) << v_float << 'f' << std::endl;
}

void Data::printDouble() const
{
	std::cout << "double: " << std::fixed << std::setprecision(precesion) << v_double << std::endl;
}

void Data::setPrecision(void)
{
	if (type == "double" || type == "float")
	{
		this->precesion = str.find(".");
		this->precesion = (str.length() - this->precesion - 1);
        if(str.find(".") == str.length() -1 )
            this->precesion++;
		if (type == "float" && !(str.find(".") == str.find("f") -1 ) )
			this->precesion--;
	}
	else
		this->precesion = 1;
}

void Data::printTypes()
{
	setPrecision();
	printChar();
	printInt();
	printFloat();
	printDouble();
}


std::string Data::getType()
{
    return (this->type);
}