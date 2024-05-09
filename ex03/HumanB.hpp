/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:28:15 by math              #+#    #+#             */
/*   Updated: 2024/05/09 06:09:10 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H__
# define HUMANB_H__

#include "Weapon.hpp"

class HumanB
{
	std::string	_name;
	Weapon		*_myWeapon;
	public:
		HumanB( std::string name);
		~HumanB( void );
		void	attack( void ) const;
		void	setWeapon( Weapon &anyWeapon);
};

#endif
