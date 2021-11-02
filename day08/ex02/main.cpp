#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "the top is : "<< mstack.top() << std::endl;
    mstack.pop();
    std::cout<< "the size is : " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    std::cout << "------------ begin ->  end --------------" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::cout << "------------ end  ->  begin --------------" << std::endl;

    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
    std::cout << *rit << std::endl;
    ++rit;
    }
    std::stack<int> s(mstack);
    MutantStack<int> copy(mstack);
    std::cout << "------------ stack copy --------------" << std::endl;
    MutantStack<int>::iterator cit = copy.begin();
    MutantStack<int>::iterator cite = copy.end();
    while (cit != cite)
    {
    std::cout << *cit << std::endl;
    ++cit;
    }
    
    return 0;
}