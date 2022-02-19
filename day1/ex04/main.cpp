#include <iostream>
#include <fstream>
#include <string>

void replace(std::string& line, std::string from, std::string to)
{
	for (std::string::size_type n = line.find(from); n != std::string::npos; n = line.find(from))
	{
		line.erase(n, from.size());
		line.insert(n, to);
    }
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename(av[1]);
		std::string from(av[2]);
		std::string to(av[3]);
		std::string line;

		std::ofstream fout;
		std::ifstream fin;

		try
		{
			fin.open(filename.c_str());

			if (!fin.is_open())
			{
				std::cout << "Problems opening the file " << filename << std::endl;
				return (1);
			}
			filename += ".replace";
			fout.open(filename.c_str());

			if (!fout.is_open())
			{
				fin.close();
				std::cout << "Problems opening the file " << filename << std::endl;
				return (1);
			}

			while (std::getline(fin, line))
			{
				replace(line, from, to);
				fout << line << std::endl;
			}
			fout.close();
			fin.close();
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
	{
		std::cout << "Your input should include filename and 2 strings" << std::endl;
	}
	return (0);
}
