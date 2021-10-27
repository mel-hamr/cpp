#ifndef __SPAN_HPP__
# define __SPAN_HPP__

#include <iostream>
#include <vector>

class Span
{
	private :
		unsigned int _N;
		std::vector<int> _Numbers;
	public :
		Span();
		Span(unsigned int N);
		class FullVector : public std::exception
		{
			const char *what() const throw(){
				return ("the vector limits reached !!");
			}
		};
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		~Span();
};

#endif