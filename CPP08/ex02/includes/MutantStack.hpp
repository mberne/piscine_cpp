#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack(MutantStack const &src)
		{
			*this = src;
		}
		virtual ~MutantStack() {}

		MutantStack	&operator=(MutantStack const &rhs)
		{
			if (&rhs != this)
				this->MutantStack::operator=(rhs);
			return *this;
		}

		T		&operator[](unsigned int i)
		{
			if(i >= this->c.size())
			{
				throw std::out_of_range("Invalid index.");
			}
			return this->c[i];
		}

		typedef typename MutantStack::container_type::iterator iterator;

		iterator	begin()
		{
			return (this->c.begin());
		}

		iterator	end()
		{
			return (this->c.end());
		}
};

#endif
