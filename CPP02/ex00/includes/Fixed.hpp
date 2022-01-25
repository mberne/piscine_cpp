#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_fixed_value;
		static const int _number_bits = 8;
		
	public:
		Fixed();
		Fixed(Fixed const &src);
		~Fixed();
		Fixed	&operator=(Fixed const &rhs);
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif