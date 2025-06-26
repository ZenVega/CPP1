/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:16:17 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/26 15:40:15 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name) :
	_name(name){};

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
	cout << "Human " << _name << " crusehs bones with " << _weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
