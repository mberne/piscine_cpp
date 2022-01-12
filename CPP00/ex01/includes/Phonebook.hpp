#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	private:
		Contact 		_array[8];
		size_t			_number_of_contact;
		void			add_contact(void);
		void			search_contact();
		void			print_contact(int index);
	public:
		Phonebook();
		~Phonebook();
		void	loop();
};

#endif