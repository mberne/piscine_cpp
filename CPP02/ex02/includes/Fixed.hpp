#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixed_value;
		static const int	_number_of_fractional_bits = 8;
		
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		Fixed	&operator=(Fixed const &rhs);

		bool	operator>(Fixed const &rhs);
		bool	operator<(Fixed const &rhs);
		bool	operator>=(Fixed const &rhs);
		bool	operator<=(Fixed const &rhs);
		bool	operator==(Fixed const &rhs);
		bool	operator!=(Fixed const &rhs);

		Fixed	operator+(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs);
		Fixed	operator*(Fixed const &rhs);
		Fixed	operator/(Fixed const &rhs);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif