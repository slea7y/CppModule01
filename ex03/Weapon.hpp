/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:31:16 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/04 13:52:27 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon();
		~Weapon();
		void	setType(std::string type);
		std::string	getType();
};

#endif