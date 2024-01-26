/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:11:24 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 12:30:25 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat& other);
	~Cat();

	Cat&		operator = (const Cat& p);
	void		makeSound() const;
	std::string	getIdea(unsigned int idx) const;
	void		setIdea(std::string idea, unsigned int idx);
};

#endif
