/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 00:07:15 by math              #+#    #+#             */
/*   Updated: 2024/05/10 05:43:55 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[ debug ]" << std::endl << "debuggin..." << std::endl << std::endl;
}
void	Harl::info( void )
{
	std::cout << "[ info ]" << std::endl << "this is the nfo..." << std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ warning ]" << std::endl << "take care..." << std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ error ]" << std::endl << "run..." << std::endl << std::endl;
}

Harl::Harl()
{
	actions["A"] = &Harl::debug;
	actions["B"] = &Harl::info;
	actions["C"] = &Harl::warning;
	actions["D"] = &Harl::error;
}

Harl::~Harl() {}

void	Harl::complain( std::string level )
{
	std::map <std::string, void (Harl::*)()>::const_iterator	it;

	it = actions.find(level);
	if (it == actions.end())
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	while (it != actions.end())
	{
		(this->*(it->second))();
		it++;
	}
}
