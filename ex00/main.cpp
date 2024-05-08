/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:19:14 by math              #+#    #+#             */
/*   Updated: 2024/05/09 00:11:03 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*ptr;

	std::cout << std::endl;
	randomChump("Thor");
	std::cout << std::endl << "Thor uses stack because his lifetime ends on function return" <<std::endl;
	std::cout << std::endl;
	ptr = newZombie("Zaz");
	ptr->announcer();
	std::cout << std::endl << "Zaz uses heap because he is still walking around after function return" <<std::endl;
	ptr->announcer();
	std::cout << std::endl << "Take care with zombies, always delete them" <<std::endl;
	std::cout << std::endl;
	delete ptr;
	std::cout << std::endl << "Good job, now you are free of a bloody end!!" <<std::endl;
	std::cout << std::endl;
	return (0);
}