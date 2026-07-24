#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat;

class Form {
	private:
		const std::string name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		Form();
		Form(const std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &other);
		virtual ~Form();
		int getGradeToSign() const;
		int getGradeToExecute() const;
		std::string getName() const;
		bool getIsSigned() const;
		
		void beSigned(const Bureaucrat &bur);
		
		class GradeTooHighException : public std::exception {
			public: 
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public: 
			virtual const char *what() const throw();	
			
		};

		Form &operator=(const Form &other);
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
