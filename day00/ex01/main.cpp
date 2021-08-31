#include "phone.book.hpp"

void	add_contact(contact contact[],int index)
{
	std::string value;

	std::cout << std::endl <<  "Enter The First Name" << std::endl;
	std::getline(std::cin, value);
	contact[index].set_first_name(value);

	std::cout << std::endl << "Enter The Last Name" << std::endl;
	std::getline(std::cin, value);
	contact[index].set_last_name(value);

	std::cout << std::endl << "Enter The Nickname" << std::endl;
	std::getline(std::cin, value);
	contact[index].set_nickname(value);

	std::cout << std::endl << "Enter The Phone Number" << std::endl;
	std::getline(std::cin, value);
	contact[index].set_phone_number(value);

	std::cout << std::endl << "Enter The Darkest Secret" << std::endl;
	std::getline(std::cin, value);
	contact[index].set_darkest_secret(value);
}

void	display_contact(contact contact[],int index)
{
	int i;
	std::string first_name;
    std::string last_name;
    std::string  nick_name;
    std::string phone_number;
    std::string darkest_secret;
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl ;
    i = 0;
	if(index >= 8)
		index = 7;
	while (i <= index)
    {
        first_name = ft_trim(contact[i].get_first_name());
        first_name = ft_lenght(first_name);
        last_name = ft_trim(contact[i].get_last_name());
        last_name = ft_lenght(last_name);
        nick_name = ft_trim(contact[i].get_nickname());
        nick_name = ft_lenght(nick_name);
        std::cout << "         "<< i + 1 <<"|";
        print_info(first_name, last_name, nick_name);   
        i++;
    }
}
void	search_contact(contact contacts[],int p_index)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	std::string input;
	int	index;

	while(1)
	{
		while (1)
		{
			std::cout << "Enter the contact's index : ";
			std::getline(std::cin, input);
			if(isdigit(input[0]))
				break;
			else
				std::cout << "index Invalid" << std::endl;
		}
		index = std::atoi(input.c_str());
		index -= 1;
		if ((index > -1 && index <= 7) && index <= p_index)
		{
			first_name = ft_trim(contacts[index].get_first_name());
			last_name = ft_trim(contacts[index].get_last_name());
			nick_name = ft_trim(contacts[index].get_nickname());
			phone_number = ft_trim(contacts[index].get_phone_number());
			darkest_secret = ft_trim(contacts[index].get_darkest_secret());
			std::cout << "First Name : " << first_name << " " << std::endl;
			std::cout << "Last  Name : " << last_name <<  " " << std::endl;
			std::cout << "Nick  Name : " << nick_name <<  " " << std::endl;
			std::cout << "Phone Number : " << phone_number <<" " << std::endl;
			std::cout << "Darkest Secret : " << darkest_secret <<" " << std::endl;
			break;
		}
		else
		{
			std::cout << "Index ot of range" << std::endl;
		}
	}
}

int main()
{
	phonebook phonebook;

	phonebook.index = -1;
	while (1)
	{
		std::cout << "  /____________________ooo____________________________\\" << std::endl ;
		std::cout << "  |                   > ADD                            | " << std::endl ;
		std::cout << "  |                   > SEARCH                         |" << std::endl ;
		std::cout << "  |                   > EXIT                           |" << std::endl ;
		std::cout << "  \\____________________ooo____________________________/" << std::endl ;
		std::cout << "                Enter your choice : "  ;
		std::getline(std::cin,  phonebook.choice);
		std::cout << std::endl;
		if(phonebook.choice == "add" || phonebook.choice == "ADD")
		{
			phonebook.index++;
			add_contact(phonebook.contact,phonebook.index % 8);
		}
		else if(phonebook.choice == "SEARCH" || phonebook.choice == "search")
		{
			display_contact(phonebook.contact,phonebook.index);
			search_contact(phonebook.contact,phonebook.index);
		}
		else if(phonebook.choice == "exit" || phonebook.choice == "EXIT")
			exit(0);
		else
			std::cout << "\tWrong Option" << std::endl;
	}
}