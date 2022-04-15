#include "Form.hpp"

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
	{
		throw Form::GradeTooHighException();
	}
	if (gradeToSign > 150 || gradeToExecute > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::Form(Form const &other)
	: _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	_isSigned = other._isSigned;
}

Form::~Form()
{
}

Form &Form::operator=(Form const &other)
{
	_isSigned = other._isSigned;
	return(*this);
}

const std::string& Form::getName() const
{
	return _name;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

bool Form::isSigned() const
{
	return _isSigned;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
	{
		throw Form::GradeTooLowException();
	}

	_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form: grade too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form: grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
	if (form.isSigned())
	{
		os << "Form: " << form.getName() << " is signed, required sign grade = "
		<< form.getGradeToSign() << ", required execute grade = " << form.getGradeToExecute() << std::endl;
	}
	else
	{
		os << "Form: " << form.getName() << " is not signed, required sign grade = "
		   << form.getGradeToSign() << " required execute grade = " << form.getGradeToExecute() << std::endl;
	}

	return os;
}
