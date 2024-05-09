/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:37:22 by math              #+#    #+#             */
/*   Updated: 2024/05/09 05:40:34 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &anyWeapon ) : _name(name), _myWeapon(anyWeapon)
{
	return ;
}

HumanA::~HumanA( void )
{
	std::cout << this->_name + " is dead" << std::endl;
}
void	HumanA::attack( void ) const
{
	std::cout << this->_name + " attacks with their " + this->_myWeapon.getType() << std::endl;
}