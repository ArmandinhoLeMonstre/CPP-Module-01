/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:30:13 by armitite          #+#    #+#             */
/*   Updated: 2025/02/04 10:01:25 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie (void) {

	std::cout << "Constructor called" << std::endl;
	
	return;
}

Zombie::~Zombie (void) {

	std::cout << "Destructor called" << std::endl;
	
	return;
}

void	Zombie::set_name(std::string name) {

	if (name.empty())
		this->name = "Unnamed";
	else
		this->name = name;
	
	return ;
}

void	Zombie::announce(void) {

	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}