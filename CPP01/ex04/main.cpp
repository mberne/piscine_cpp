#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (ac != 4 || file.empty() || s1.empty() || s2.empty() || !s1.compare(s2))
	{
		std::cout << "Wrong parameters" << std::endl;
		return 1;
	}
	std::ifstream infile;
	std::ofstream outfile;
	infile.open(file);
	outfile.open(file.append(".replace"), std::ios::trunc);
	if (!infile.is_open() || !outfile.is_open())
	{
		std::cout << "File/Open error" << std::endl;
		return 1;
	}
	std::string line;
	std::size_t	found = 0;
	while (std::getline(infile, line))
	{
		while (found == line.find(s1))
		{
			std::cout << "Trouvée !" << std::endl;
			line.erase(found, s1.size());
			line.insert(found, s2);
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}