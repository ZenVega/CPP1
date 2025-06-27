/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:45:07 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/27 12:02:34 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
// something like this maybe:
// things_to_say[string][function_pointer] = {"debug", &debug}{"error", &error}
// for each i
//     if things_to_say[i][0] == "input"
//         things_to_say[i][1]();
//
void Harl::complain(string level)
{
	int lv;
	switch (lv)
	{
	case 0:
		this->debug();
	}
}
