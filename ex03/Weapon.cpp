/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 04:33:30 by math              #+#    #+#             */
/*   Updated: 2024/05/09 05:57:36 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type) : type(type)
{
	std::cout << "Forging " + this->getType() << std::endl;
	return ;
}

Weapon::~Weapon( void )
{
	std::cout << this->getType() + " was destroyed" << std::endl;
}

std::string const	&Weapon::getType() const
{
	std::string const &ref = this->type;

	return (ref);
}

void	Weapon::setType( std::string newType )
{
	std::cout << "Re-Forging " + this->getType() + " into " + newType << std::endl;
	this->type = newType;
}