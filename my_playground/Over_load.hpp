/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Over_load.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:06:31 by hosokawa          #+#    #+#             */
/*   Updated: 2024/11/23 13:31:04 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OVER_LOAD_HPP
#define OVER_LOAD_HPP


#include <string>

class Over_load
{
	private: 
		int value_;
	public:
		Over_load(int value);
		~Over_load();
		Over_load operator+(Over_load over_load.value_);
		int getValue();

};





#endif
