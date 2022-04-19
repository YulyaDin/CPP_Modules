#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base* generate(void)
{
	switch (std::rand() % 3)
	{
		case 0:
			std::cout << "A generated" << std::endl;
			return (new A);
		case 1:
			std::cout << "B generated" << std::endl;
			return (new B);
		case 2:
			std::cout << "C generated" << std::endl;
			return (new C);
		default:
			return (0);
	}
}

void identify_pointer(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A identified" << std::endl;
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "B identified" << std::endl;
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "C identified" << std::endl;
	}
}

void identify_reference(Base& p)
{
	if (dynamic_cast<A*>(&p))
	{
		std::cout << "A identified" << std::endl;
	}
	else if (dynamic_cast<B*>(&p))
	{
		std::cout << "B identified" << std::endl;
	}
	else if (dynamic_cast<C*>(&p))
	{
		std::cout << "C identified" << std::endl;
	}

}

int main()
{
	std::srand(time(nullptr));

	A* a = new A;
	B* b = new B;
	C* c = new C;
	
	identify_pointer(a);
	identify_pointer(b);
	identify_pointer(c);
	std::cout << std::endl;
	identify_reference(*a);
	identify_reference(*b);
	identify_reference(*c);
	std::cout << std::endl;
	
	delete a;
	delete b;
	delete c;

	Base* base = generate();
	identify_pointer(base);
	identify_reference(*base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify_pointer(base);
	identify_reference(*base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify_pointer(base);
	identify_reference(*base);
	delete base;
	return 0;
}
