/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:29:26 by armitite          #+#    #+#             */
/*   Updated: 2025/02/04 10:20:09 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::getType(void) {

	std::cout << type;

	return ;
}

void	Weapon::setType(std::string name) {

	if (name.empty())
		type = "Unknown Weapon";
	else
		type = name;

	return ;
}

Weapon::Weapon(std::string name) : type(name) {

	return ;
}

Weapon::~Weapon(void) {
	
	return ;
}

