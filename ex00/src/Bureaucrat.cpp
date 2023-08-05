#include "../include/Bureaucrat.hpp"

// const char *Bureaucrat::GradeTooHighException::what() const throw()
// {
//     std::cout << "Grade is too high!" << std::endl;
// }

// const char *Bureaucrat::GradeTooLowException::what() const throw()
// {
//     std::cout << "Grade is too low!" << std::endl;
// }

// Bureaucrat::Bureaucrat(const std::string &name, unsigned int grade) : _name(name)
// {
//     if (grade < 1)
//         throw GradeTooHighException();
//     else if (grade > 150)
//         throw GradeTooLowException();
//     this->_grade = grade;

// }


// GradeTooHighException implementation
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high.";
}

// GradeTooLowException implementation
const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low.";
}

// Bureaucrat constructor implementation
Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name) {
    if (grade < 1) {
        throw GradeTooHighException();
    } else if (grade > 150) {
        throw GradeTooLowException();
    }
    this->grade = grade;
}

// Bureaucrat destructor implementation
Bureaucrat::~Bureaucrat() {}

// Getter for name
std::string Bureaucrat::getName() const {
    return name;
}

// Getter for grade
int Bureaucrat::getGrade() const {
    return grade;
}

// Increment grade
void Bureaucrat::incrementGrade() {
    if (grade > 1) {
        grade--;
    } else {
        throw GradeTooHighException();
    }
}

// Decrement grade
void Bureaucrat::decrementGrade() {
    if (grade < 150) {
        grade++;
    } else {
        throw GradeTooLowException();
    }
}

// Overloading insertion (<<) operator
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}
