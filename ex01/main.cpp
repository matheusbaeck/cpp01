/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:19:14 by math              #+#    #+#             */
/*   Updated: 2024/05/09 00:39:56 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*horde;
	int		z_nb;

	z_nb = 20;
	horde = zombieHorde(z_nb, "Zaz");
	for (int i = 0; i < z_nb; ++i)
		horde[i].announcer();
	delete [] horde;
	return (0);
}