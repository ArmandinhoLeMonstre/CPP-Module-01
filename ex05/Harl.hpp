/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:03:36 by armitite          #+#    #+#             */
/*   Updated: 2025/02/03 18:12:44 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>

class Harl {

public:

	Harl(void);
	~Harl(void);
	void complain( std::string level );

private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif