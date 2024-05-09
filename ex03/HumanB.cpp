/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:37:22 by math              #+#    #+#             */
/*   Updated: 2024/05/09 06:09:53 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : _name(name), _myWeapon(NULL)
{
	return ;
}

HumanB::~HumanB( void )
{
	std::cout << this->_name + " is dead" << std::endl;
}
void	HumanB::attack( void ) const
{
	if (this->_myWeapon)
		std::cout << this->_name + " attacks with their " + this->_myWeapon->getType() << std::endl;
	else
		std::cout << this->_name + " can't attck unarmed" << std::endl;
}

void	HumanB::setWeapon( Weapon &anyWeapon )
{
	this->_myWeapon = &anyWeapon;
}