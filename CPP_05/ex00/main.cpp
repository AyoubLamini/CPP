/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:01:56 by alamini           #+#    #+#             */
/*   Updated: 2025/06/17 13:23:48 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("IRS", 1);

        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
    } catch (Bureaucrat::GradeTooHighException &e)// || std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}