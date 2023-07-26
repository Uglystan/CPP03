/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:12:21 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/25 14:14:03 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Paul("Paul");
	ClapTrap	Jack("Jack");
	ClapTrap	Paul2(Paul);
	ScavTrap	Scav("Scav");
	
	Paul2 = Jack;
	
	Paul.attack("Jack");
	Jack.takeDamage(1);
	Jack.beRepaired(1);
	Scav.attack("Paul");
	Scav.guardGate();
	Scav.takeDamage(1);

	return (0);
}