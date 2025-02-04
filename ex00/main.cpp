/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:50:56 by armitite          #+#    #+#             */
/*   Updated: 2025/02/04 09:57:42 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void) {

	Zombie	instance("Foo");
	Zombie	*zombie = newZombie("Boo");

	instance.announce();
	zombie->announce();
	randomChump("Goo");

	delete zombie;
	return (0);
}