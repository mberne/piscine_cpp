#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of parameters" << std::endl;
		return 1;
	}
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (file.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Wrong parameters" << std::endl;
		return 1;
	}

	std::ifstream infile;
	std::ofstream outfile;
	infile.open(file.c_str());
	outfile.open(file.append(".replace").c_str(), std::ios::trunc);
	if (!infile.is_open() || !outfile.is_open())
	{
		std::cout << "File/Open error" << std::endl;
		return 1;
	}

	std::string	str;
	std::stringstream tmp;
	tmp << infile.rdbuf();
	str = tmp.str();

	std::size_t	i = 0;
	std::size_t	found = 0;
	while ((found = str.find(s1, i)) != str.npos)
	{
		str.erase(found, s1.size());
		str.insert(found, s2);
		i = found + s2.size();
	}

	outfile << str << std::endl;

	infile.close();
	outfile.close();

	return 0;
}