/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:03:39 by armitite          #+#    #+#             */
/*   Updated: 2025/02/04 13:13:29 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void) {
	
	std::cout << "Passing through the constructor" << std::endl;

	return ;
}

Harl::~Harl(void) {

	std::cout << "Passing through the desctructor" << std::endl;

	return ;
}

void	Harl::debug(void) {

	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."; 
	std::cout << " I really do!" << std::endl;

	return ;
}

void	Harl::info(void) {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;

	return ;
}

void	Harl::warning(void) {

	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I've been coming for years whereas you started working here since last month.";
	std::cout << std::endl;

	return ;
}

void	Harl::error(void) {

	std::cout << "his is unacceptable! I want to speak to the manager now." << std::endl;

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