/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:31:31 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/04 14:57:03 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : _type("") {}

Weapon::Weapon( std::string type) {
    setType(type);
}

Weapon::~Weapon() {}

void	Weapon::setType(std::string type){
    _type = type;
}
std::string	Weapon::getType(){
    return (_type);    
}
