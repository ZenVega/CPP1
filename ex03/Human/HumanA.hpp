/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:05:46 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/26 15:30:30 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Weapon/Weapon.hpp"
#include "../includes/CONSTANTS.hpp"

class HumanA
{
private:
	string	_name;
	Weapon &_weapon;

public:
	HumanA(string name, Weapon &weapon);
	~HumanA();

	void attack(void);
};
