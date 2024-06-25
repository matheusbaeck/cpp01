/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 00:07:15 by math              #+#    #+#             */
/*   Updated: 2024/06/25 07:37:51 by math             ###   ########.fr       */
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
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
}

Harl::~Harl() {}

void	Harl::complain( std::string level )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_levels[i] == level)
		{
			switch (i)
			{
				case 0:
					this->debug();
					this->info();
					this->warning();
					this->error();
					break;
				case 1:
					this->info();
					this->warning();
					this->error();
					break;
				case 2:
					this->warning();
					this->error();
					break;
				case 3:
					this->error();
					break;
			}
			return ;
		}	
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
