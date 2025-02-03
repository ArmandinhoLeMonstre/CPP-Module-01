/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:09:17 by armitite          #+#    #+#             */
/*   Updated: 2025/02/03 11:51:40 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon &club);
	~HumanA(void);
	
	void	attack(void);

private:

	std::string name;
	Weapon &w_equipped;
	
};

#endif