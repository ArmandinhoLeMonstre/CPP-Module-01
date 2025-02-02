/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:30:13 by armitite          #+#    #+#             */
/*   Updated: 2025/02/02 20:54:57 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie (void) {

	std::cout << "Crea" << std::endl;
	
	return;
}

Zombie::~Zombie (void) {

	std::cout << "Del" << std::endl;
	
	return;
}

void	Zombie::set_name(std::string name) {

	this->name = name;
	
	return ;
}

void	Zombie::announce(void) {

	std::cout << this->name << " : Booouh" << std::endl;

	return ;
}