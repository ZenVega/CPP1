/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:09:27 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *Z = new Zombie(name);
	return Z;
}

void randomChump(std::string name)
{
	Zombie Z(name);
	Z.announce();
}

int main()
{
	string heep_horde[5]  = {"Peggy", "Hetty", "Pete", "Grunter", "Wilma"};
	string stack_horde[5] = {"Silly", "Snarl", "Kathrine the greedy", "Gnorl", "Willy"};

	for (size_t i = 0; i < 5; i++)
	{
		Zombie *Z = newZombie(heep_horde[i]);
		Z->announce();
		delete Z;
	}

	for (size_t i = 0; i < 5; i++)
	{
		randomChump(stack_horde[i]);
	}
}
