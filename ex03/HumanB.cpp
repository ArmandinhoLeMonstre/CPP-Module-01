/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:25:02 by armitite          #+#    #+#             */
/*   Updated: 2025/02/04 10:15:51 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : name(name) {
	
	return ;
}

HumanB::~HumanB(void) {
	
	return ;
}

void	HumanB::setWeapon(Weapon &club) {
	
	this->w_equipped = &club;

	return ;
}

void	HumanB::attack(void) {

	std::cout << this->name << " attacks with their ";
	w_equipped->getType();
	std::cout << std::endl; 

	return ;
}