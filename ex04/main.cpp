/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/26 16:29:55 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

int main(int argc, char **argv)
{
	ifstream	 file;
	string		 buffer;
	stringstream copy;

	if (argc != 4)
	{
		cout << "Invalid number of args" << endl;
		return 1;
	}
	file.open(argv[1]);
	if (file.is_open())
	{
		while (getline(file, buffer))
		{
			copy << buffer;
		}
	}
	else
	{
		cout << "Invalid file" << endl;
		return 1;
	}
	file.close();
	cout << copy.str();
	return 0;
}
