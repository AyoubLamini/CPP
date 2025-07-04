#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential Pardon", 25, 5), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential Pardon", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src): AForm("Presidential Pardon", 25, 5), _target(src.getTarget())
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this == &src)
		return *this;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == false)
		throw (AForm::FormNotSignedException());
	else
	{
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}

std::string	PresidentialPardonForm::getTarget(void)const
{
	return (this->_target);
}

std::ostream&   operator<<( std::ostream& o, PresidentialPardonForm *rhs) 
{
    o << "------------- Form Info -------------" << std::endl;
    o << "Form name: " << rhs->getName() << std::endl
      << "Grade to sign: " << rhs->getGradeToSign() << std::endl
      << "Grade to execute: " << rhs->getGradeToExecute();
    return o;
}