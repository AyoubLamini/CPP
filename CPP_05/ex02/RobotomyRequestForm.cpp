#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Robotomy", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robotomy", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src): AForm("Robotomy", 72, 45), _target(src.getTarget())
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this == &src)
		return *this;
	return *this;
}

static int RobotomyChance = 0;
void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == false)
		throw (AForm::FormNotSignedException());
	else
	{
        if (RobotomyChance % 2 == 0)
        {
            std::cout << "Bzzzzzz... "  << this->_target << " has been robotomized successfully!" << std::endl; 
        }
        else
        {
            std::cout << "robotomy failed" << std::endl;
        }
        RobotomyChance++;
    }
}

std::string	RobotomyRequestForm::getTarget(void)const
{
	return (this->_target);
}

std::ostream&   operator<<( std::ostream& o, RobotomyRequestForm *rhs) 
{
    o << "------------- Form Info -------------" << std::endl;
    o << "Form name: " << rhs->getName() << std::endl
      << "Grade to sign: " << rhs->getGradeToSign() << std::endl
      << "Grade to execute: " << rhs->getGradeToExecute();
    return o;
}