/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 01:01:04 by math              #+#    #+#             */
/*   Updated: 2024/05/10 05:46:59 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

static int sumAsciiValues(const char* str)
{
	int	sum = 0;

	while (*str != '\0')
	{
		sum += *str;
		str++;
	}
	return sum;
}

int	main( int argc, char **argv )
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Invalid number of args!!" << std::endl;
		return (1);
	}
	switch (sumAsciiValues(argv[1]))
	{
		case DEBUG:
			harl.complain("A");
			break;
		
		case INFO:
			harl.complain("B");
			break;

		case WARNING:
			harl.complain("C");
			break;

		case ERROR:
			harl.complain("D");
			break;
		
		default:
			harl.complain("any");
			break;
	}
	return (0);
}
