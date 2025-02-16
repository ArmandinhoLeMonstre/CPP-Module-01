/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:18:59 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 13:11:22 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &club) : name(name), w_equipped(club) {
	
	return ;
}

HumanA::~HumanA(void) {
	
	return ;
}

void	HumanA::attack(void) {

	std::cout << this->name << " attacks with their ";
	std::cout << w_equipped.getType();
	std::cout << std::endl; 

	return ;
}