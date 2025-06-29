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
	size_t	hordeCount = 17;
	Zombie *horde	   = zombieHorde(hordeCount, "gnarg");
	for (size_t i = 0; i < hordeCount; i++)
		horde[i].announce();

	delete[] horde;
	return 0;
}
