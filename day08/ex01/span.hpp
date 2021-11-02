#ifndef __SPAN_HPP__
# define __SPAN_HPP__

#include <iostream>
#include <vector>
#include <algorithm>

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
		class NoSpan : public std::exception
		{
			const char *what() const throw(){
				return ("there is less than 2 numbers !!");
			}
		};
		template <typename T>
		void addNumber(T first, T last)
		{
			while (first < last)
			{
				addNumber(*first);
				first++;
    		}
		}
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		~Span();
};

#endif