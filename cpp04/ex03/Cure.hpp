/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:03:27 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/27 13:39:45 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(const Cure& o);
	
	~Cure();

	Cure& operator = (const Cure& o);

	Cure*	clone() const;
	void	use(ICharacter& target);
};


#endif