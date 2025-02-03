/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:29:26 by armitite          #+#    #+#             */
/*   Updated: 2025/02/03 11:14:25 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::getType(void) {

	std::cout << type;

	return ;
}

void	Weapon::setType(std::string name) {

	type = name;

	return ;
}

Weapon::Weapon(std::string name) : type(name) {

	std::cout << "Weapon: " << this->type << std::endl;
	
	return ;
}

Weapon::~Weapon(void) {
	
	return ;
}

