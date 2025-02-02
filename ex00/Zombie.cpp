/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:59:25 by armitite          #+#    #+#             */
/*   Updated: 2025/02/02 17:40:03 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

void	Zombie::announce(void) {

	std::cout <<this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}

Zombie::Zombie(std::string name_zombie) {

	return ;
}

Zombie::~Zombie(void) {

	return ;
}