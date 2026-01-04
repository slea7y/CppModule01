/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:31:44 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/04 15:30:53 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
    private: 
        std::string _name;
        Weapon&      _type;
    public:
        HumanA( std::string name, Weapon& type );
        ~HumanA();
        void attack();
};

#endif