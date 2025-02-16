/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armitite <armitite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:09:58 by armitite          #+#    #+#             */
/*   Updated: 2025/02/16 12:18:43 by armitite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

int	main(int ac, char **av)
{	
	if (ac != 4)
		return (std::cout << "Args error" << std::endl, 2);
	std::string word = av[2];
	std::string replace = av[3];
	
	std::ifstream ifs(av[1], std::ios::binary);
    if (!ifs) 
	{
        std::cerr << "Error opening file!" << std::endl;
        return 2;
    }
    std::ostringstream oss;
    oss << ifs.rdbuf();
    std::string content = oss.str();
	std::string out_name = av[1];
	out_name.append(".replace");
	std::ofstream	ofs(out_name.c_str());

	std::size_t found = content.find(word);
	while (found != std::string::npos)
	{
		for (unsigned i = 0; i < found; i++)
			ofs << content.at(i);
		for (unsigned i = 0; i < strlen(replace.c_str()); i++)
			ofs << replace.at(i);
		content.erase(0, found + strlen(word.c_str()));
		found = content.find(word);
	}
	for (unsigned i = 0; i < strlen(content.c_str()); i++)
		ofs << content.at(i);
	
	ifs.close();
	ofs.close();
	return (0);
}