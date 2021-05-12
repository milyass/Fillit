/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isvalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:21:19 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:48:20 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		isvalid(char *str)
{
	if (ft_strlen(str) == 20)
	{
		if (str[19] == '\n' && str[20] == '\0')
		{
			if (is_case_two(str) == 0)
				return (0);
			else
				return (1);
		}
	}
	if (ft_strlen(str) == 21)
	{
		if (is_case_one(str) == 0)
			return (0);
		else
			return (1);
	}
	return (0);
}
