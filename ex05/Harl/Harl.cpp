/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:45:07 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/27 14:05:53 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	cout << "What?" << endl;
	cout << "..." << endl;
}

Harl::~Harl()
{
	cout << "..." << endl;
	cout << "Leave me alone!" << endl;
}

void Harl::debug(void)
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << endl;
}

void Harl::info(void)
{
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << endl;
}

void Harl::error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::default_complain(void)
{
	cout << "Don't talk to me!" << endl;
}

// declaring a member function pointer: return_type (ClassName::*pointer_name)(argument_types) = &ClassName::member_function;
// execution a member function pointer: (ClassName.*pointer_name)(argument_types);
void Harl::complain(string level)
{
	const int num_complaints					 = 4;
	string	  level_switch[num_complaints]		 = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*function[num_complaints])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < num_complaints; i++)
	{
		if (!level.compare(level_switch[i]))
		{
			(this->*function[i])();
			return;
		}
	}
	this->default_complain();
}
