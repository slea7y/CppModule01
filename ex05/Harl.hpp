/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:17:42 by majkijew          #+#    #+#             */
/*   Updated: 2026/01/05 19:26:16 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl(/* args */);
        ~Harl();
        void    complain( std::string level );
};

Harl::Harl(){}

Harl::~Harl() {}

#endif