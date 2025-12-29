/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 00:32:23 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/29 13:26:26 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <vector>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie( std::string name );
		~Zombie();
		void	announce( void ) const ;
};


void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif