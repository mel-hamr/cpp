#ifndef __SPAN_HPP__
# define __SPAN_HPP__

#include <iostream>
#include <vector>
<<<<<<< HEAD
#include <algorithm>
=======
>>>>>>> 343becd5283d9dcc4e3d2804482b932514725e6e

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
<<<<<<< HEAD
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
=======
>>>>>>> 343becd5283d9dcc4e3d2804482b932514725e6e
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		~Span();
};

#endif