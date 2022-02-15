#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	private:

	public:
		Data();
		Data(Data const &src);
		virtual ~Data();

		Data	&operator=(Data const &rhs);
};

#endif