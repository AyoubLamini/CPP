/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:56:38 by alamini           #+#    #+#             */
/*   Updated: 2025/06/20 18:52:30 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;

    AForm();

public:
    AForm( const std::string& name, const int gradeToSign, const int gradeToExecute );
    AForm( const AForm& src );
    virtual ~AForm();

    AForm&   operator=( const AForm& rhs );

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    void        beSigned( const Bureaucrat& bureaucrat );
    virtual void execute(Bureaucrat const &executor) const = 0;


    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw();
    };
    class FormNotSignedException : public std::exception
	{
	    public:
		    virtual const char *what() const throw();
	};
    
};

std::ostream&   operator<<( std::ostream& o, const AForm& rhs );

#endif