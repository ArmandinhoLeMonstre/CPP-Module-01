/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:30:15 by armitite          #+#    #+#             */
/*   Updated: 2025/02/02 20:52:06 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie {

public:

	Zombie(void);
	~Zombie(void);

	void	set_name(std::string name);
	void	announce( void );

private:

	std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif