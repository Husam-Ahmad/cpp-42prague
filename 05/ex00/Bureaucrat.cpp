#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {

}


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	if (grade < 1) {
		throw GradeTooHighException();
	}
	if (grade > 150) {
		throw GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
	if (this != &other) {
		this->grade = other.grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::incrementGrade(){
	if (grade <= 1) {
		throw GradeTooHighException();
	}
	else if (grade > 150) {
		throw GradeTooLowException();
	}
	else
		grade--;
}

void Bureaucrat::decrementGrade(){
	if (grade < 1) {
		throw GradeTooHighException();
	}
	else if (grade >= 150) {
		throw GradeTooLowException();
	}
	else
		grade++;	
	
}	

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur){
	out << std::endl << bur.getName();
	out << ", Bureaucrat Grade " << bur.getGrade() << std::endl;
	return out;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat::GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat::GradeTooLowException";
}
