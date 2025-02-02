/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:30:17 by armitite          #+#    #+#             */
/*   Updated: 2025/02/02 20:52:47 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie*		zombies = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		
		zombies[i].set_name(name);
		zombies[i].announce();
	}
	return (zombies);
}