#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array() : _array(NULL), _size(0) {}

		Array(unsigned int n)
		{
			_array = new T[n];
			_size = n;
			size_t	i = 0;
			while (i < n)
			{
				_array[i] = 0;
				i++;
			}
		}

		Array(Array const &src)
		{
			*this = src;
		}

		virtual ~Array()
		{
			delete [] _array;
		}

		Array	&operator=(Array const &rhs)
		{
			_size = rhs._size;
			_array = new T[_size];

			unsigned int	i = 0;
			while (i < _size)
			{
				_array[i] = rhs._array[i];
				i++;
			}
			return *this;
		}

		T		&operator[](unsigned int i) const
		{
			if(i >= _size)
			{
				throw Array::InvalidIndexException();
			}
			return _array[i];
		}

		unsigned int	size()
		{
			return _size;
		}

		class InvalidIndexException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Invalid index");
				}
		};
};

#endif
