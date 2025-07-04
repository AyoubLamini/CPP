/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:59:22 by alamini           #+#    #+#             */
/*   Updated: 2025/06/17 15:27:42 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}


Form::Form( const std::string& name, const int gradeToSign, const int gradeToExecute ) : _name( name ), _signed(false), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute )
{
    if ( gradeToSign < 1  || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExecute > 150  )
        throw Form::GradeTooLowException();
}

Form::Form( const Form& src ) : _name( src.getName() ),_signed(src.getSigned()), _gradeToSign( src.getGradeToSign() ), _gradeToExecute( src.getGradeToExecute() ) {}

Form::~Form() {}

Form&   Form::operator=( const Form& rhs ) {
    if ( this != &rhs )
        _signed = rhs.getSigned();
    return *this;
}

std::string Form::getName() const {
    return _name;
}

bool   Form::getSigned() const {
    return _signed;
}

int   Form::getGradeToSign() const {
    return _gradeToSign;
}

int   Form::getGradeToExecute() const {
    return _gradeToExecute;
}

void    Form::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > _gradeToSign )
    {
        std::cout << bureaucrat << " couldn't sign " << this->_name << " because grade is too low." << std::endl;
        throw Form::GradeTooLowException();
    }
    else if (this->getSigned())
    {
        std::cout << bureaucrat << " couldn't sign " << this->_name << " because it is already signed." << std::endl;
    }
    else
    {
        std::cout << bureaucrat << " signed " << this->_name << std::endl;
        _signed = true;
    }
}

const char* Form::GradeTooHighException::what() const throw() 
{
    return "grade is too high!";
}
const char* Form::GradeTooLowException::what() const throw()
{
    return "grade is too low!";
}


std::ostream&   operator<<( std::ostream& o, const Form& rhs ) {
    o << "------------- Form Info -------------" << std::endl;
    o << "Form name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Grade to execute: " << rhs.getGradeToExecute();
    return o;
}