/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:23:33 by armitite          #+#    #+#             */
/*   Updated: 2025/02/03 11:52:01 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);
	
	void	attack(void);
	void	setWeapon(Weapon &club);

private:

	std::string name;
	Weapon *w_equipped;
	
};

#endif