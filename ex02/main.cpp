/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/25 15:46:06 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

int main()
{
	string	brain	  = "HI THIS IS BRAIN";
	string *stringPTR = &brain;
	// ref to variable, not value. has to be initialized in the same line
	string &stringREF = brain;

	cout << "Addr. of var brain: " << &brain << endl;
	cout << "Addr. of the value pinted to by strPTR: " << stringPTR << endl;
	cout << "Addr. pointed to by ref, same as addr of brain: " << &stringREF << endl;
	cout << "___" << endl;
	cout << "Value of var brain: " << brain << endl;
	cout << "Value pointed to by strPTR: " << *stringPTR << endl;
	cout << "Value of var referenced by stringREF: " << stringREF << endl;
	return 0;
}
