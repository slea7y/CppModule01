/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 16:42:06 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/05 17:10:41 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>

int main(int ac, char **av) {
    if (ac != 4)
        return (1);
    std::string filename(av[1]);
    
    std::ifstream in(filename);
    if (!in)
        return (1);
    std::string newText;
    std::string newFileName = filename.append(".replace");
    std::ofstream newFile(newFileName);
    std::string s1(av[2]);
    std::string s2(av[3]);
    while (std::getline(in, newText)) {
        size_t pos = 0;
        while ((pos = newText.find(s1, pos)) != std::string::npos)
        {
            newText.erase(pos, s1.length());
            newText.insert(pos, s2);
        }    
        newFile << newText << "\n";
    }
    in.close();
}
