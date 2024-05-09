/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 00:07:15 by math              #+#    #+#             */
/*   Updated: 2024/05/10 01:53:16 by math             ###   ########.fr       */
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
	actions["DEBUG"] = &Harl::debug;
	actions["INFO"] = &Harl::info;
	actions["WARNING"] = &Harl::warning;
	actions["ERROR"] = &Harl::error;
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl died" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::map <std::string, void (Harl::*)()>::const_iterator	it;

	it = actions.find(level);
	if (it != actions.end())
	{
		(this->*(it->second))();
	}
	else
		std::cout << "Not a valid complaining level" << std::endl;
}
