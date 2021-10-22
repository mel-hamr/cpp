#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
# include <cstdlib>
#include <iomanip>
class Data
{
private:
	bool		there_is_point;
	std::string	type;
	bool		T_impossible;
	bool		T_indisponible;
    int			point;
	std::string str;
	char v_char;
	int		v_int;
	float	v_float;
	double	v_double;
	int precesion;
public:
	Data();
	Data(std::string str);
	~Data();
	void	Parsetype();
	int	check_error();
	std::string	getType();
	void SetTypes();
	void printChar() const;
	void printInt() const;
	void printFloat() const;
	void printDouble() const;
	void setPrecision(void);
	void printTypes();

};


#endif