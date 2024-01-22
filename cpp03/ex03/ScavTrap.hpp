/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:48:16 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/17 19:10:45 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string& str);
	ScavTrap(const ScavTrap& st);
	~ScavTrap();
	
	ScavTrap&	operator = (const ScavTrap& p);

	void	attack(const std::string& target);
	void	guardGate();
	void	trapStatus() const;
};

#endif