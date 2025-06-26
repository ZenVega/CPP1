/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:02:08 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/26 15:21:37 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "unknown";
}

Weapon::Weapon(string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}

void Weapon::setType(string type)
{
	_type = type;
}

string Weapon::getType(void)
{
	return _type;
}
