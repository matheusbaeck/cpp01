/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:22:32 by math              #+#    #+#             */
/*   Updated: 2024/05/09 05:30:33 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H__
# define WEAPON_H__

#include <iostream>
#include <string>

class Weapon
{
	std::string	type;
	public:
		Weapon( std::string type);
		~Weapon( void );
		std::string const	&getType() const;
		void				setType( std::string newType );
};

#endif
