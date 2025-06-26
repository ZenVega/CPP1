/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:05:46 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/26 15:39:40 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Weapon/Weapon.hpp"
#include "../includes/CONSTANTS.hpp"

class HumanB
{
private:
	string	_name;
	Weapon *_weapon;

public:
	HumanB(string name);
	~HumanB();

	void setWeapon(Weapon &weapon);
	void attack(void);
};
