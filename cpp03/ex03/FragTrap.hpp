/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:48:16 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/17 19:10:19 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap: public virtual ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string& str);
	FragTrap(const FragTrap& ft);
	~FragTrap();
	
	FragTrap&	operator = (const FragTrap& p);

	void	highFivesGuys(void);
	void	trapStatus() const;
};

#endif