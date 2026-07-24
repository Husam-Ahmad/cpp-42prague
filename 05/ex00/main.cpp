#include "Bureaucrat.hpp"


int main() {
	try {
		Bureaucrat bureaucrat1("John Doe", 0);
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	Bureaucrat bureaucrat2("John Doe", 150);
	try {
		bureaucrat2.decrementGrade();
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << bureaucrat2<< std::endl;
	Bureaucrat bureaucrat3("Jane Smith", 1);
	try {
		bureaucrat3.incrementGrade();
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	bureaucrat3.decrementGrade();
	std::cout << bureaucrat3 << std::endl;
	return 0;
}
