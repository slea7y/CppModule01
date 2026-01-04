/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:33:25 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/04 14:15:30 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA() : _name("") {}

HumanA::~HumanA() {}

void HumanA::setName( std::string name) {
    _name = name;
}

std::string HumanA::getName() {
    return (_name);
}

void HumanA::setWeapon( Weapon type ){
    _type = type;    
}

std::string HumanA::getWeapon( ) {
    Weapon w;
    return (w.getType());
}

void HumanA::attack() {
    std::cout << getName() << " attacks with their " << getWeapon( );
}