/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:27:05 by math42            #+#    #+#             */
/*   Updated: 2023/09/04 18:46:10 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class Zombie
{
	std::string _name;
	
	public:
		Zombie( std::string name );
		~Zombie( void );
		std::string get_name( void );
		void announcer( void );
};


#endif /* __ZOMBIE_H__ */