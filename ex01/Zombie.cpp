/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 00:36:28 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/29 13:43:53 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// int _zombieAmount = 0;

Zombie::Zombie() : _name("") {}

Zombie::~Zombie() {}

Zombie::Zombie(std::string name)
	: _name(name)
{}

void Zombie::announce( void ) const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie* newZombie( std::string name ) {
	Zombie* newZombie = new Zombie(name);
	return (newZombie);
}