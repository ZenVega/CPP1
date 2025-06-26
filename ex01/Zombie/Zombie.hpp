/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:21:32 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/16 15:00:52 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "../includes/CONSTANTS.h"

class Zombie
{
private:
	string _name;

public:
	Zombie();
	~Zombie();
	void setName(string name);
	void announce(void);
};

#endif
