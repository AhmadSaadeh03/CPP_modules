#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat b1("Alice", 10);
        Bureaucrat b2("Bob", 100);

        Form f1("Tax Form", 50, 30);
        Form f2("Top Secret", 5, 3);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        std::cout << "\n--- Alice tries to sign Tax Form ---" << std::endl;
        b1.signForm(f1);   // should succeed

        std::cout << "\n--- Bob tries to sign Top Secret ---" << std::endl;
        b2.signForm(f2);   // should fail

        std::cout << "\n--- Final Status ---" << std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
