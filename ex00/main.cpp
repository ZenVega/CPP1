/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:28:11 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/25 15:22:41 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/main.hpp"

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
