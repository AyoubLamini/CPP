#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class Bureaucrat;

class From;

class PresidentialPardonForm : public AForm
{
	private:
		const std::string _target;
		PresidentialPardonForm(void);
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &src);

		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

		void execute(Bureaucrat const &executor) const;

		std::string getTarget(void)const;


};

std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm *a);

#endif