#include <iostream>
#include "Contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

std::string const &Contact::get_firstname(void) const
{
	return (_first_name);
}

std::string const &Contact::get_lastname(void) const
{
	return (_last_name);
}

std::string const &Contact::get_nickname(void) const
{
	return (_nickname);
}

std::string const &Contact::get_phonenumber(void) const
{
	return (_phone_number);
}

std::string const &Contact::get_darkestsecret(void) const
{
	return (_darkest_secret);
}

void Contact::set_firstname(std::string data)
{
	_first_name = data;
}

void Contact::set_lastname(std::string data)
{
	_last_name = data;
}

void Contact::set_nickname(std::string data)
{
	_nickname = data;
}

void Contact::set_phonenumber(std::string data)
{
	_phone_number = data;
}

void Contact::set_darkestsecret(std::string data)
{
	_darkest_secret = data;
}