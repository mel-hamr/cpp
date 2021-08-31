#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string& stringREF =str;
    std::string *stringPTR = &str;

    std::cout << "STRING adresse :\t" << &str << std::endl;
    std::cout << "STRING_PTR adresse :\t" << &stringPTR << std::endl;
    std::cout << "STRING_REF adresse:\t" << &stringREF << std::endl;
    
    std::cout << "STRING :\t" << str << std::endl;
    std::cout << "STRING_PTR :\t" << *stringPTR << std::endl;
    std::cout << "STRING_REF :\t" << stringREF << std::endl;
}