/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:30:11 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 13:17:30 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int nbr = 5;
	Zombie	*zombie = zombieHorde(nbr, "Foo");

	for (int i = 0; i < nbr; i++)
		zombie[i].announce();
	delete [] zombie;
	
	return (0);
}