#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : _name(other._name)
{
	_grade = other._grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	_grade = other._grade;
	return(*this);
}

const std::string& Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade == 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	_grade++;
}

void Bureaucrat::signForm(Form& form)
{
	if (form.isSigned())
	{
		std::cout << "Bureaucrat " << _name << " cannot sign form " << form.getName() << " because form is already signed" << std::endl;
		return;
	}
	
	if (_grade <= form.getGradeToSign())
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << _name << " signs form " << form.getName() << std::endl;
	}
	else
	{
		std::cout << "Bureaucrat " << _name << " cannot sign form " << form.getName() << " because his grade is to low" << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}
