/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunghoy <seunghoy@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:10:01 by seunghoy          #+#    #+#             */
/*   Updated: 2023/07/04 21:38:54 by seunghoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string	name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce( void );
};

Zombie*    zombieHorde( int N, std::string name );

#endif