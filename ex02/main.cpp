/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:08:23 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/03 19:27:22 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "The memory address of the string variable: " << &str << "\n"
			<< "The memory address held by stringPTR: " << stringPTR << "\n"
			<< "The memory address held by stringREF: " << &stringREF << "\n";

	std::cout << "The value of the string variable: " << str << "\n"
			<< "The value pointed to by stringPTR: " << *stringPTR << "\n"
			<< "The value pointed to by stringREF: " << stringREF << "\n";
	
}