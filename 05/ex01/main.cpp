#include "Form.hpp"
#include "Bureaucrat.hpp"

// int main() {
// 	try {
// 		Bureaucrat bureaucrat1("John Doe", 0);
// 	} catch (const std::exception &e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}

// 	Bureaucrat bureaucrat2("John Doe", 150);
// 	try {
// 		bureaucrat2.decrementGrade();
// 	} catch (const std::exception &e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}
// 	std::cout << bureaucrat2<< std::endl;
// 	Bureaucrat bureaucrat3("Jane Smith", 1);
// 	try {
// 		bureaucrat3.incrementGrade();
// 	} catch (const std::exception &e) {
// 		std::cerr << "Exception: " << e.what() << std::endl;
// 	}
// 	bureaucrat3.decrementGrade();
// 	std::cout << bureaucrat3 << std::endl;
// 	return 0;
// }

int main() {
	try {
		Form form1("Form A", 5, 50);
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	Bureaucrat bureaucrat1("John Doe", 100);
	Form form2("Form B", 40, 50);
	try {
		form2.beSigned(Bureaucrat("John Doe", 140));
	} catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	try {
		bureaucrat1.signForm(form2);
	}catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	

	// std::cout << form2 << std::endl;

	// Bureaucrat bureaucrat("Jane Smith", 1);
	// form2.beSigned(bureaucrat);
	// try {
	// 	form2.beSigned(bureaucrat);
	// } catch (const std::exception &e) {
	// 	std::cerr << "Exception: " << e.what() << std::endl;
	// }
	// std::cout << form2 << std::endl;

	return 0;
}
