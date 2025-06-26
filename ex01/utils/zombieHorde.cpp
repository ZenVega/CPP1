/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:17:56 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/25 15:50:42 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *Zs = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		stringstream itoa;
		itoa << i;
		string index_str;
		itoa >> index_str;
		Zs[i].setName(name + "#" + (index_str));
	}

	return Zs;
}
