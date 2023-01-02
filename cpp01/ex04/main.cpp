#include <fstream>
# include <iostream>
# include <string>

int	main(int ac, char *av[])
{
	if (ac != 4 || !av[2][0])
		return (0);
	std::fstream fsr;
	fsr.open(av[1], std::fstream::in);
	if (!fsr.is_open())
		return (0);
	std::string	copy;
	char c;
	for (;!fsr.eof();)
	{
		fsr.get(c);
		copy += c;
	}
	fsr.close();
	std::size_t	newpos = 0;
	std::size_t	oldpos = 0;
	while (copy.find(av[2], oldpos) != std::string::npos)
	{
		newpos = copy.find(av[2], oldpos);
		copy.erase(newpos, strlen(av[2]));
		copy.insert(newpos, av[3]);
		oldpos = newpos + strlen(av[3]);
	}
	std::fstream fsw;
	std::string newname = av[1];
	newname += ".replace";
	fsw.open(newname, std::fstream::out);
	if (!fsw.is_open())
		return (0);
	fsw << copy;
	fsw.close();
	return (1);
}
