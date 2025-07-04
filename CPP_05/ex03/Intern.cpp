#include "Intern.hpp"


Intern::Intern() {}

Intern::Intern(const Intern& src) {
    *this = src;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern& rhs) {
   if (this == &rhs)
		return *this;
	return *this;
}

typedef AForm* (*FormPointer)(const std::string&);

static AForm* createShrubbery(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(const std::string& target) {
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(const std::string& target) {
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target) {
    const std::string names[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    FormPointer creators[] = {
        &createShrubbery,
        &createRobotomy,
        &createPresidential
    };

    for (int i = 0; i < 3; ++i) {
        if (formName == names[i]) {
            AForm* form = creators[i](target);
            std::cout << "Intern creates : " << std::endl << *form << std::endl;
            return form;
        }
    }

    std::cout << "Intern could not create form: " << formName << std::endl;
    return NULL;
}
