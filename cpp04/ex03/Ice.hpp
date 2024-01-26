/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:03:27 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/26 20:10:35 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>

#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(const Ice& o);
	
	~Ice();

	Ice& operator = (const Ice& o);

	Ice*	clone() const;
};


#endif