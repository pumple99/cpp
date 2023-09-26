/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:48:16 by seunghoy          #+#    #+#             */
/*   Updated: 2023/09/26 20:35:45 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string& str);
	ScavTrap(const ScavTrap& st);
	~ScavTrap();
	
	ScavTrap&	operator = (const ScavTrap& st);

	void guardGate();
};