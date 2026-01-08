/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:17:42 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/08 16:15:14 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

// function pointers enable users to treat functions as objects. They provide a
//  way to pass functions as arguments to other functions. A function pointer 
// to a member function is a pointer that points to a non-static member 
// function of a class

class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl();
        ~Harl();
        void    complain( std::string level );
};

#endif