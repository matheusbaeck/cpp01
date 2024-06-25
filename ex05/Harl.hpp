/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 00:00:11 by math              #+#    #+#             */
/*   Updated: 2024/06/25 07:42:45 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H__
# define HARL_H__

# include <string>
# include <iostream>

class Harl
{
	std::string	_levels[4];
	void		(Harl::*_actions[4])( void );

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif