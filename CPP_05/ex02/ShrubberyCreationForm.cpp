#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shruberry", 145, 137), _target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src): AForm("Shrubbery", 145, 137), _target(src.getTarget())
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this == &src)
		return *this;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
		throw (Bureaucrat::GradeTooLowException());
	else if (this->getSigned() == false)
		throw (AForm::FormNotSignedException());
	else
	{
		std::ofstream outfile((_target + "_shrubbery").c_str());

		const char* tree[] = {
			"    *    ",
			"   ***   ",
			"  *o*o*  ",
			" ******* ",
			" *o***o* ",
			"*********",
			"   |||   "
		};

	for (size_t i = 0; i < 5; ++i) {
		for (size_t j = 0; j < sizeof(tree) / sizeof(tree[0]); ++j)
			outfile << tree[j] << std::endl;
		outfile << std::endl;
	}
	outfile.close();
	}
}

std::string	ShrubberyCreationForm::getTarget(void)const
{
	return (this->_target);
}

std::ostream&   operator<<( std::ostream& o, ShrubberyCreationForm *rhs) 
{
    o << "------------- Form Info -------------" << std::endl;
    o << "Form name: " << rhs->getName() << std::endl
      << "Grade to sign: " << rhs->getGradeToSign() << std::endl
      << "Grade to execute: " << rhs->getGradeToExecute();
    return o;
}