#pragma once

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(const std::string& name, int gradeToSign, int gradeToExecute);
	Form(Form const &other);
	Form &operator=(Form const &other);
	~Form();

	const std::string& getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool isSigned() const;
	
	void beSigned(const Bureaucrat& bureaucrat);
	
	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};

private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const Form& form);
