/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:38:20 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/28 08:58:50 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*Important d'appeler le constructeur de la class parent pour "copier" toute
les fonctions et attributs*/
ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}
/*Ici on appele le constructeur de copie de la classe parent pour avoir les
meme valeur on a fonc pas besoins de redeclarer les valeurs les constructeur
de ClapTrap le fait pour nous*/
ScavTrap::ScavTrap(ScavTrap const& substitue) : ClapTrap(substitue)
{
	std::cout << "Constructor copie ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& substitue)
{
	std::cout << "Assignement operator ScavTrap called" << std::endl;
	if (this != &substitue)
	{
		_name = substitue._name;
		_hitPoints = substitue._hitPoints;
		_energyPoints = substitue._energyPoints;
		_attackDamage = substitue._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << "ScavTrap " << _name << " don't have enough energy points !" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " mode Gate keeper activate" << std::endl;
}