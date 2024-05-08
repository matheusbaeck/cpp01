/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:27:05 by math42            #+#    #+#             */
/*   Updated: 2024/05/08 23:49:18 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef __ZOMBIE_H__
#  define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie
{
	std::string _name;
	
	public:
		Zombie( std::string name );
		~Zombie( void );
		std::string get_name( void ) const;
		void announcer( void ) const;
};

Zombie *newZombie( std::string name );
void	randomChump( std::string name );

# endif /* __ZOMBIE_H__ */