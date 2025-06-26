/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 13:58:40 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/26 15:22:30 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/CONSTANTS.hpp"

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
	string _type;

public:
	Weapon(void);
	Weapon(string type);
	~Weapon();
	void   setType(string type);
	string getType(void);
};

#endif
