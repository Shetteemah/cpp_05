#include "../include/Bureaucrat.hpp"

// int main()
// {
//     try
//     {
//         /* do some stuff with bureaucrats */
//     }
//     catch (std::exception & e)
//     {

//     }
// }


int main() {
    try {
        Bureaucrat highGradeBureaucrat("John Doe", 1);
        Bureaucrat lowGradeBureaucrat("Jane Doe", 150);

        std::cout << highGradeBureaucrat << std::endl;
        std::cout << lowGradeBureaucrat << std::endl;

        highGradeBureaucrat.incrementGrade();
        lowGradeBureaucrat.decrementGrade();

        std::cout << highGradeBureaucrat << std::endl;
        std::cout << lowGradeBureaucrat << std::endl;

        // Trying to instantiate a Bureaucrat with an invalid grade
        // This should throw an exception
        Bureaucrat invalidGradeBureaucrat("Invalid", 0);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
