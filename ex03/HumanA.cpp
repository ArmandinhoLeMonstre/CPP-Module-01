/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:18:59 by armitite          #+#    #+#             */
/*   Updated: 2025/02/03 11:21:17 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string name, Weapon &club) : name(name), w_equipped(club) {
	
	std::cout << "Constructor HA called" << std::endl;
	
	return ;
}

HumanA::~HumanA(void) {
	
	std::cout << "Destructor HA called" << std::endl;
	
	return ;
}

void	HumanA::attack(void) {

	std::cout << this->name << " attacks with their ";
	w_equipped.getType();
	std::cout << std::endl; 

	return ;
}