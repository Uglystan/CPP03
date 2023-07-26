/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgirault <lgirault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:49:42 by lgirault          #+#    #+#             */
/*   Updated: 2023/07/25 16:59:09 by lgirault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(std::string const& name);
		DiamondTrap(DiamondTrap const& substitue);
		DiamondTrap&	operator=(DiamondTrap const& substitue);
		~DiamondTrap(void);
		void	attack(std::string target);
		void	whoAmI(void);
		
	private :
		std::string	_name;	
};

#endif