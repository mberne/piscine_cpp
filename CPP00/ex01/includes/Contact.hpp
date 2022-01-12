#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;

	public:
		Contact();
		~Contact();
		std::string const &get_firstname(void) const;
		std::string const &get_lastname(void) const;
		std::string const &get_nickname(void) const;
		std::string const &get_phonenumber(void) const;
		std::string const &get_darkestsecret(void) const;
		void set_firstname(std::string data);
		void set_lastname(std::string data);
		void set_nickname(std::string data);
		void set_phonenumber(std::string data);
		void set_darkestsecret(std::string data);

};

#endif