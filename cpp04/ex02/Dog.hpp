/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:11:24 by seunghoy          #+#    #+#             */
/*   Updated: 2024/01/25 12:54:42 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	Dog(const Dog& other);
	~Dog();

	Dog&		operator = (const Dog& p);
	void		makeSound() const;
	std::string	getIdea(unsigned int idx) const;
	void		setIdea(std::string idea, unsigned int idx);
};


#endif