/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 01:09:27 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/29 13:28:20 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie	*zombie;
	zombie = newZombie("kaczka");
	zombie->announce();
	delete zombie;

	randomChump("piotr");
	randomChump("maja");
}