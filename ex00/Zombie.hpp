/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:15:35 by armitite          #+#    #+#             */
/*   Updated: 2025/02/02 17:35:32 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <string>

class Zombie {

public:

	Zombie(std::string name_zombie);
	~Zombie(void);

	Zombie* newZombie( std::string name );
	void	announce(void);

private:

	std::string name;

};

#endif