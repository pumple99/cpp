/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 19:12:06 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/22 11:09:18 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string		_name;
public:
	DiamondTrap();
	DiamondTrap(std::string& str);
	DiamondTrap(const DiamondTrap& dt);
	~DiamondTrap();
	
	DiamondTrap&	operator = (const DiamondTrap& p);

	void	whoAmI();
};

#endif