#ifndef _BUREAUCRAT_HPP_
#define _BUREAUCRAT_HPP_

#include <iostream>
#include <string>
#include <exception>

// class Bureaucrat
// {
//     private:
//         const std::string   _name;
//         unsigned int        _grade;

//     public:
//         Bureaucrat();
//         Bureaucrat(const Bureaucrat &src);
//         Bureaucrat(unsigned int grade);
//         Bureaucrat(const std::string name);
//         Bureaucrat(const std::string name, unsigned int grade);

//         ~Bureaucrat();

//         Bureaucrat  &operator=(const Bureaucrat &src);

//         void    gradePlus();
//         void    gradeMinus();

//         const std::string getName();
//         unsigned int    getGrade();
//         class   GradeTooHighException : public std::exception
//         {
//             public:
//                 virtual const char *what() const throw();
//         };
//         class   GradeTooLowException : public std::exception
//         {
//             public:
//                 virtual const char *what() const throw();
//         };
//         // Bureaucrat::GradeTooHighException(void);
//         // Bureaucrat::GradeTooLowException(void);
// };

// std::ostream    &operator<<(std::ostream &o, Bureaucrat *a);
// #endif

// #ifndef BUREAUCRAT_HPP
// #define BUREAUCRAT_HPP

// #include <string>
// #include <exception>

class Bureaucrat {
public:
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    Bureaucrat(const std::string &name, int grade);
    ~Bureaucrat();

    std::string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();

private:
    const std::string name;
    int grade;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif // BUREAUCRAT_HPP
