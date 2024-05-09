/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:28:15 by math              #+#    #+#             */
/*   Updated: 2024/05/09 05:40:40 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H__
# define HUMANA_H__

#include "Weapon.hpp"

class HumanA
{
	std::string	_name;
	Weapon		&_myWeapon;
	public:
		HumanA( std::string name, Weapon &anyWeapon );
		~HumanA( void );
		void	attack( void ) const;
};

#endif
