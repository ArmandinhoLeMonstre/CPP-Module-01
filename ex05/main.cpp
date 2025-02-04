/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:03:33 by armitite          #+#    #+#             */
/*   Updated: 2025/02/04 12:39:17 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	complainer;
	
	complainer.complain("debug");
	complainer.complain("info");
	complainer.complain("warning");
	complainer.complain("error");
	complainer.complain("Nop");

	return (0);
}