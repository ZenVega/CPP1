/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:06:03 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/26 15:33:36 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon &weapon) :
	_name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	cout << "Human " << _name << " pops some heads with " << _weapon.getType() << endl;
}
