/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:33:22 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/04 16:17:18 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
    private: 
        std::string _name;
        Weapon*      _type;
    public:
        HumanB( std::string name );
        ~HumanB();
        void        setWeapon(Weapon& type);
        void attack();
};

#endif