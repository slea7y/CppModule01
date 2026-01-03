/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 00:36:28 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/03 18:35:52 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("") {}

Zombie::~Zombie() {
	std::cout << "destroyed " << _name << "\n";
}

Zombie::Zombie( std::string name )
	: _name(name)
{}

void Zombie::announce( void ) const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName( std::string name ) {
	_name = name;
}

std::string Zombie::getName() const {
	return (_name);
}

Zombie* newZombie( std::string name ) {
	Zombie* newZombie = new Zombie(name);
	return (newZombie);
}
