/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:03:39 by armitite          #+#    #+#             */
/*   Updated: 2025/02/03 19:30:42 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void) {
	std::cout << "Passing through the constructor" << std::endl;
}

Harl::~Harl(void) {
	std::cout << "Passing through the desctructor" << std::endl;
}

void	Harl::debug(void) {

	std::cout << "Debug" << std::endl;

	return ;
}

void	Harl::info(void) {

	std::cout << "Info";

	return ;
}

void	Harl::warning(void) {

	std::cout << " warning ";

	return ;
}

void	Harl::error(void) {

	std::cout << " error ";

	return ;
}

void	Harl::complain(std::string level) {
	
	std::string	levels_str[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	void (Harl::*levels_ptr[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	for(int i = 0; i < 4; i++) {
		if (level == levels_str[i])
		{
			(this->*levels_ptr[i])();
			return ;
		}
	}
	std::cout << "This level seems weird to me..." << std::endl;
	return ;
}