/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:31:55 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/04 16:32:59 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) 
    : _name(name), _type(NULL)
{}

HumanB::~HumanB() {}

void  HumanB::setWeapon(Weapon& type) {
    _type = &type;
}

void HumanB::attack() {
    if (!_type)
        std::cout << _name << " attacks with their bare hands" << "\n";
    else 
        std::cout << _name << " attacks with their " << _type->getType() << "\n";
}