/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:37:37 by math42            #+#    #+#             */
/*   Updated: 2024/05/09 00:30:56 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name + " destroyed" << std::endl;
}

std::string Zombie::get_name( void ) const
{
	return (this->_name);
}

void Zombie::set_name( std::string name )
{
	this->_name = name;
}

void Zombie::announcer( void ) const
{
	std::cout << this->get_name() + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
