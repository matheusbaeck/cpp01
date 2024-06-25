/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 01:01:04 by math              #+#    #+#             */
/*   Updated: 2024/06/25 07:38:27 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main( int argc, char **argv )
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Invalid number of args!!" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}
