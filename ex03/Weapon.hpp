/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 09:29:29 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 13:03:36 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon {

public :

	Weapon(std::string name);
	~Weapon(void);

	const std::string	getType(void) const;
	void	setType(std::string name);

private:

	std::string type;
};

#endif