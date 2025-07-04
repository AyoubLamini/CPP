/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:01:56 by alamini           #+#    #+#             */
/*   Updated: 2025/06/17 15:11:04 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main( void )
{
    try {
       
        // AForm form("Tax Return", 2, 2);
        
        // std::cout << form << std::endl;

        // bureaucrat.signForm(form);
        // bureaucrat.signForm(form);

        // bureaucrat.incrementGrade();

        // AForm *form = new ShrubberyCreationForm("Home");
        // std::cout << *form << std::endl;
        // bureaucrat.signForm(*form);
        // bureaucrat.executeForm(*form);
        // delete form;

        // RobotomyRequestForm robotomyForm("Alen");
        // std::cout << robotomyForm << std::endl;
        // robotomyForm.beSigned(bureaucrat);
        // bureaucrat.executeForm(robotomyForm);


        // PresidentialPardonForm presidentialForm("groot");
        // std::cout << presidentialForm << std::endl;
        // presidentialForm.beSigned(bureaucrat);
        // bureaucrat.executeForm(presidentialForm);
        
        Intern intern;
        
        intern.makeForm("shrubbery creation", "Home");
        intern.makeForm("robotomy request", "Alen");
        intern.makeForm("presidential pardon", "groot");
        intern.makeForm("unknown form", "Unknown Target");
        
        
        
    } catch (const std::exception &e) // catch by reference
    { 
        std::cout << e.what() << std::endl; // polymorphic behavior
    }
    return 0;
}