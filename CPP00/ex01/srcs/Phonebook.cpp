#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Phonebook.hpp"

Phonebook::Phonebook() : _number_of_contact(0)
{
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

std::string	format_string(std::string data)
{
	if (data.size() > 10)
		return (data.substr(0, 9).append("."));
	return (data);
}

void	Phonebook::print_contact(int index)
{
	if (index >= (int)_number_of_contact || index < 0)
	{
		std::cout << "Contact doesn't exist." << std::endl;
		return ;
	}
	std::cout << "First name : " << _array[index].get_firstname() << std::endl;
	std::cout << "Last name : " << _array[index].get_lastname() << std::endl;
	std::cout << "Nickname : " << _array[index].get_nickname() << std::endl;
	std::cout << "Phone number : " << _array[index].get_phonenumber() << std::endl;
	std::cout << "Darkest secret : " << _array[index].get_darkestsecret() << std::endl;
}

void	Phonebook::search_contact()
{
	size_t		i = 0;
	std::string	index;

	if (_number_of_contact == 0)
	{
		std::cout << "No contact available." << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	while (i < _number_of_contact)
	{
		std::cout << "|" << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << format_string(_array[i].get_firstname()) << "|";
		std::cout << std::setw(10) << std::right << format_string(_array[i].get_lastname()) << "|";
		std::cout << std::setw(10) << std::right << format_string(_array[i].get_nickname()) << "|" << std::endl;;
		i++;
	}
	std::cout << "Which index ?" << std::endl;
	std::cin >> index;
	print_contact(std::atoi(index.c_str()));
}

void	Phonebook::add_contact()
{
	std::string tmp;

	if (_number_of_contact >= 8)
	{
		std::cout << "Only 8 contacts allowed." << std::endl;
		return ;
	}
	std::cout << "Enter a first name : ";
	std::getline(std::cin, tmp);
	_array[_number_of_contact].set_firstname(tmp);
	std::cout << "Enter a last name : ";
	std::getline(std::cin, tmp);
	_array[_number_of_contact].set_lastname(tmp);
	std::cout << "Enter a nickname : ";
	std::getline(std::cin, tmp);
	_array[_number_of_contact].set_nickname(tmp);
	std::cout << "Enter a phone number : ";
	std::getline(std::cin, tmp);
	_array[_number_of_contact].set_phonenumber(tmp);
	std::cout << "Enter a darkest secret : ";
	std::getline(std::cin, tmp);
	_array[_number_of_contact].set_darkestsecret(tmp);
	_number_of_contact++;
}

void	Phonebook::loop()
{
	std::string	input;

	while (1)
	{
		std::cout << "What do you want to do ? ADD a contact, SEARCH a contact, or EXIT ?" << std::endl;
		std::getline(std::cin, input);
		if (!std::cin.good() || std::cin.eof())
		{
			std::cout << "Error." << std::endl;
			return ;
		}
		if (input == "EXIT")
			return ;
		else if (input == "ADD")
			add_contact();
		else if (input == "SEARCH")
			search_contact();
		else
			std::cout << "Use ADD, SEARCH or EXIT.";
		std::cout << std::endl;
	}
}