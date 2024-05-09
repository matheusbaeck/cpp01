/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:50:57 by math              #+#    #+#             */
/*   Updated: 2024/05/09 23:57:18 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void	ft_replace(std::string const &str, std::string const &str2, std::string *src)
{
	size_t	to_replace;

	while ((to_replace = src->find(str)) != std::string::npos)
	{
		src->erase(to_replace, str.length());
		src->insert(to_replace, str2);
		ft_replace(str, str2, src);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong number of args!" << std::endl;
		return (1);
	}
	
	std::string const	&filename = argv[1];
	std::string const	&newFilename = filename + ".out";
	std::string const	&s1 = argv[2];
	std::string const	&s2 = argv[3];

	if (s1.length() <= 0)
	{
		std::cout << "string to replace can't be empty" << std::endl;
		return (1);
	}

	std::ifstream		ifs(filename.c_str());
	std::ofstream		ofs(newFilename.c_str());
	if (!ifs)
	{
		std::cerr << "Error opening input file: " << filename << std::endl;
		return (1);
	}
	if (!ofs)
	{
		std::cerr << "Error opening output file: " << newFilename << std::endl;
		return (1);
	}

	std::string			line;
	std::istream& rd = std::getline(ifs, line);
	if (!rd)
		return (0);
	do
	{
		ft_replace(s1, s2, &line);
		if (rd.good())
			ofs << line << std::endl;
		else if (rd.eof())
			ofs << line;
		std::getline(ifs, line);
	} while( rd );
	return (0);
}
