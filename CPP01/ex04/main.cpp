#include <iostream>
#include <fstream>

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
	if (file.empty() || s1.empty() || s2.empty() || !s1.compare(s2))
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
	std::string line;
	std::size_t	found = 0;
	while (std::getline(infile, line))
	{
		found = line.find(s1);
		while (found != line.npos)
		{
			line.erase(found, s1.size());
			line.insert(found, s2);
			found = line.find(s1);
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}