/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 00:07:15 by math              #+#    #+#             */
/*   Updated: 2024/06/25 07:11:09 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "debug" << std::endl;
}
void	Harl::info( void )
{
	std::cout << "info" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "warning" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "error" << std::endl;
}

Harl::Harl()
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";

	_actions[0] = &Harl::debug;
	_actions[1] = &Harl::info;
	_actions[2] = &Harl::warning;
	_actions[3] = &Harl::error;

	std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl died" << std::endl;
}

void	Harl::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_levels[i] == level)
		{
			(this->*_actions[i])();
			return ;
		}
		
	}
	std::cout << "Not a valid complaining level" << std::endl;
}
