#include "span.hpp"

Span::Span()
{
	this->_Numbers.reserve(0);
}

Span::Span(unsigned int N) : _N(N)
{
	this->_Numbers.reserve(N);
}

void Span::addNumber(int number)
{
<<<<<<< HEAD
    if(this->_Numbers.size() + 1 <= this->_N)
=======
    if(this->_Numbers.size() + 1 < this->_N)
>>>>>>> 343becd5283d9dcc4e3d2804482b932514725e6e
	    _Numbers.push_back(number);
    else
        throw FullVector();
}

int Span::longestSpan()
{
	int bigest;
	int smallest;
<<<<<<< HEAD
	std::vector<int>::iterator it;

	if (this->_Numbers.size() >= 2)
	{
		it = std::max_element(_Numbers.begin() , _Numbers.end());
		bigest = *it;
		it = std::min_element(_Numbers.begin() , _Numbers.end());
		smallest = *it;
	}
	else
		throw NoSpan();
=======

	bigest = _Numbers[0];
	smallest = _Numbers[0];
	for (unsigned int i = 0; i < _N; i++)
	{
		if (i < _N - 1)
		{
			if (_Numbers[i + 1] > bigest)
			{
				bigest = _Numbers[i + 1];
			}
			if (_Numbers[i + 1] < smallest)
			{
				smallest = _Numbers[i + 1];
			}
		}
	}
>>>>>>> 343becd5283d9dcc4e3d2804482b932514725e6e
	return (bigest - smallest);
}

int Span::shortestSpan()
{
<<<<<<< HEAD
	int temp;

	std::vector<int> vector_tmp = _Numbers;

	if (vector_tmp.size() >= 2)
	{
		std::sort(vector_tmp.begin(), vector_tmp.end());
		temp = vector_tmp[1] - vector_tmp[0];
		for (unsigned int i = 1; i < _N - 1; i++)
		{
			if (temp > (vector_tmp[i + 1] - vector_tmp[i]))
				temp = vector_tmp[i + 1] - vector_tmp[i];
		}
	}
	else
		throw NoSpan();
	return (temp);
}
=======

}

>>>>>>> 343becd5283d9dcc4e3d2804482b932514725e6e
Span::~Span()
{

}