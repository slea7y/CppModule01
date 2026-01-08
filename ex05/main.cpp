/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:17:31 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/08 16:36:00 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl complains;

	void	(Harl::*fp)(std::string);
	fp = &Harl::complain;
	
	(complains.*fp)("ERROR");
}

// int main()
// {
		
// }