/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:31:44 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/04 14:15:54 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private: 
        std::string _name;
        Weapon      _type;
    public:
        HumanA();
        ~HumanA();
        void setName( std::string name);
        std::string getName();
        void setWeapon( Weapon type );
        std::string getWeapon( );
        void attack();
};

#endif