/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:37:37 by math42            #+#    #+#             */
/*   Updated: 2023/09/04 18:49:27 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}
//Zombie::~Zombie( void ) {}

std::string Zombie::get_name( void )
{
	return (_name);
}
void Zombie::announcer( void )
{
	std::cout << get_name() + ": BraiiiiiiinnnzzzZ..." << std::endl;
}