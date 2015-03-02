/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yfuks <yfuks@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 16:54:40 by yfuks             #+#    #+#             */
/*   Updated: 2015/03/01 17:06:04 by yfuks            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_2048.h"

int			power(int number, int power)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	while (i < power)
	{
		result *= number;
		i++;
	}
	return (result);
}