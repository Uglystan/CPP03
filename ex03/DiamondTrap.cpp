/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:00:18 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/25 16:59:56 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& substitue) : ClapTrap(substitue), ScavTrap(substitue), FragTrap(substitue)
{
	std::cout << "Constructor copie DiamondTrap called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Name : " << _name << " Clap_name : " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}