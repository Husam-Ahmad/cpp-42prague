#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form() : isSigned(false), gradeToSign(0), gradeToExecute(0){
}

Form::~Form() {

}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute) {
	*this = other;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1 || gradeToExecute < 1) {
		throw GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150) {
		throw GradeTooLowException();
	}
}

int Form::getGradeToSign() const {
	return gradeToSign;
}

int Form::getGradeToExecute() const {
	return gradeToExecute;
}

std::string Form::getName() const {
	return name;
}

bool Form::getIsSigned() const {
	return isSigned;
}

Form &Form::operator=(const Form &other) {
	if (this != &other) {
		this->isSigned = other.isSigned;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << "Form: " << form.getName()
		<< ", Signed: " << form.getIsSigned()
		<< ", Grade to sign: " << form.getGradeToSign()
		<< ", Grade to execute: " << form.getGradeToExecute();

	return out;
}

void Form::beSigned(const Bureaucrat &bur) {
	if (bur.getGrade() > gradeToSign) {
		throw GradeTooLowException();
	}
	isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form::GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form::GradeTooLowException";
}
