/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:18:16 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/25 15:22:30 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include "../Zombie/Zombie.hpp"
#include "../includes/CONSTANTS.h"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
