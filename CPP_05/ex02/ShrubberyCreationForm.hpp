#ifndef SURUBBERYCREATIONFORM_HPP
#define SURUBBERYCREATIONFORM_HPP
#include <string>
#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"


class Bureaucrat;

class From;

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string _target;
		ShrubberyCreationForm(void);
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &src);

		~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);

		void execute(Bureaucrat const &executor) const;

		std::string getTarget(void)const;


};

std::ostream	&operator<<(std::ostream &o, ShrubberyCreationForm *a);

#endif