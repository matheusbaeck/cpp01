/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 00:00:11 by math              #+#    #+#             */
/*   Updated: 2024/05/10 05:45:00 by math             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H__
# define HARL_H__

# include <string>
# include <iostream>
# include <map>

enum level {
	DEBUG = 359,
	INFO = 300,
	WARNING = 534,
	ERROR = 394,
};

class Harl
{
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	std::map<std::string, void (Harl::*)()>	actions;

	public:
		Harl( void );
		~Harl( void );
		void	complain( std::string level );
};

#endif