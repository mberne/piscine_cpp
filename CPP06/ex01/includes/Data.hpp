#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	private:
		std::string	_stringValue;
		int			_intValue;
		float		_floatValue;

	public:
		Data();
		Data(Data const &src);
		virtual ~Data();

		Data	&operator=(Data const &rhs);

		std::string	getString() const;
		int			getInt() const;
		float		getFloat() const;
		void		setString(std::string value);
		void		setInt(int value);
		void		setFloat(float value);
};

std::ostream	&operator<<(std::ostream &o, Data const &rhs);

uintptr_t		serialize(Data* ptr);
Data*			deserialize(uintptr_t raw);

#endif