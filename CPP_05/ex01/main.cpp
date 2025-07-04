/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:01:56 by alamini           #+#    #+#             */
/*   Updated: 2025/06/17 18:06:10 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("IRS", 1);
        Bureaucrat hr("HR", 4);

        Form form("Tax Return", 2, 2);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;

        bureaucrat.signForm(form);
        bureaucrat.signForm(form);
        
        std::cout << hr << std::endl;
        Form contract("employment contract", 2, 2);
        hr.signForm(contract);

        // bureaucrat.incrementGrade();
        
    } catch (const std::exception &e) // catch by reference
    { 
        std::cout << e.what() << std::endl; // polymorphic behavior
    }
    return 0;
}