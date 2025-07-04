/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamini <alamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:59:22 by alamini           #+#    #+#             */
/*   Updated: 2025/06/17 15:30:26 by alamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

AForm::AForm( const std::string& name, const int gradeToSign, const int gradeToExecute ) : _name( name ), _signed(false), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute )
{
    if ( gradeToSign < 1  || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExecute > 150  )
        throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm& src ) : _name( src.getName() ),_signed(src.getSigned()), _gradeToSign( src.getGradeToSign() ), _gradeToExecute( src.getGradeToExecute() ) {}

AForm::~AForm() {
}

AForm&   AForm::operator=( const AForm& rhs ) {
    if ( this != &rhs )
        _signed = rhs.getSigned();
    return *this;
}

std::string AForm::getName() const {
    return _name;
}

bool   AForm::getSigned() const {
    return _signed;
}

int   AForm::getGradeToSign() const {
    return _gradeToSign;
}

int   AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

void    AForm::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > _gradeToSign )
    {
        std::cout << bureaucrat << " couldn't sign " << this->_name << " because grade is too low." << std::endl;
        throw AForm::GradeTooLowException();
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
const char* AForm::GradeTooHighException::what() const throw() {
    return "grade is too high!";
}
const char* AForm::GradeTooLowException::what() const throw() {
    return "grade is too low!";
}
const char* AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed!";
}

std::ostream&   operator<<( std::ostream& o, const AForm& rhs ) {
    o << "------------- Form Info -------------" << std::endl;
    o << "Form name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Grade to execute: " << rhs.getGradeToExecute();
    return o;
}