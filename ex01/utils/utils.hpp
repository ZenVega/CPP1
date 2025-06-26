/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:18:16 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/25 15:52:25 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "../Zombie/Zombie.hpp"
#include "../includes/CONSTANTS.h"
#include <iostream>
#include <sstream>

Zombie *zombieHorde(int N, std::string name);

#endif
