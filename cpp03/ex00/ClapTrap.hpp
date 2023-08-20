/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 22:46:08 by seunghoy          #+#    #+#             */
/*   Updated: 2023/08/20 16:38:14 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string& str);
	~ClapTrap();

	ClapTrap&	operator = (const ClapTrap& p);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	clapTrapStatus();
};

#endif