
#include "easyfind.hpp"

int main()
{
    std::list<int> container;


    container.push_back(5);
    container.push_back(2);
    container.push_back(12);
    container.push_back(20);

    if(easyfind(container , 200))
        std::cout << "the value is in the array" << std::endl;
    else
        std::cout << "the value is not in the array" << std::endl;
}
 