/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:33:25 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/04 15:25:51 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& type)
    : _name(name), _type(type) 
{}

HumanA::~HumanA() {}

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _type.getType() << '\n';
}