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
    if(this->_Numbers.size() + 1 < this->_N)
	    _Numbers.push_back(number);
    else
        throw FullVector();
}

int Span::longestSpan()
{
	int bigest;
	int smallest;

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
	return (bigest - smallest);
}

int Span::shortestSpan()
{

}

Span::~Span()
{

}