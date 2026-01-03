/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 01:09:27 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/03 18:38:41 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie	*horde;
	horde = ZombieHorde(N, "kaczka");
	for (int i = 0; i < N; i++) {
		horde[i].announce();	
	}
	delete[] horde;
}