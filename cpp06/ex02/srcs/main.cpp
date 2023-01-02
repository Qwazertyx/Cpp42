/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:00:04 by vsedat            #+#    #+#             */
/*   Updated: 2022/11/09 14:21:42 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/base.hpp"

Base *generate(void)
{
	std::srand((unsigned int)time(NULL));
	switch (rand() % 3)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	}
	return (0);
}

void identify(Base* p)
{
	A* pa = dynamic_cast<A*>(p);
	if (pa)
		std::cout << "A type object" << std::endl;
	B* pb = dynamic_cast<B*>(p);
	if (pb)
		std::cout << "B type object" << std::endl;
	C* pc = dynamic_cast<C*>(p);
	if (pc)
		std::cout << "C type object" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& pa = dynamic_cast<A &>(p);
		(void)pa;
		std::cout << "A type object" << std::endl;
	}
	catch (std::exception &e){}
	try 
	{
		B& pb = dynamic_cast<B &>(p);
		(void)pb;
		std::cout << "B type object" << std::endl;
	}
	catch (std::exception &e){}
	try 
	{
		C& pc = dynamic_cast<C &>(p);
		(void)pc;
		std::cout << "C type object" << std::endl;
	}
	catch (std::exception &e){}
}

int main()
{
	for (int i = 0; i < 5; i++, std::this_thread::sleep_for (std::chrono::seconds(1)))
	{
		Base *random_class = generate();
		Base &class_reference = *random_class;
		identify(random_class);
		identify(class_reference);
		delete random_class;
	}
	return (0);
}
