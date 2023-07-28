/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:12:21 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/28 09:14:29 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Frag("Frag");
	FragTrap	Fragcopie(Frag);
	FragTrap	Frageg("Frageg");

	Frageg = Frag;
	std::cout << std::endl;

	Frag.attack("Paul");
	Frag.highFivesGuys();
	Frag.takeDamage(1);
	Frag.beRepaired(1);
	
	std::cout << std::endl;
	
	Fragcopie.attack("Paul");
	Fragcopie.highFivesGuys();
	Fragcopie.takeDamage(1);
	Fragcopie.beRepaired(1);

	std::cout << std::endl;
	
	Frageg.attack("Paul");
	Frageg.highFivesGuys();
	Frageg.takeDamage(1);
	Frageg.beRepaired(1);
	
	return (0);
	
	return (0);
}