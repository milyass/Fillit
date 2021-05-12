/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iscord.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:25:24 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:30:28 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_cord		*cord(char *str)
{
	t_cord		*final;
	int			i;
	int			j;
	int			o[2];

	final = malloc(sizeof(t_cord) * 4);
	i = 0;
	j = 0;
	while (j < 4)
	{
		while (str[i] != '#')
			i++;
		if (j == 0)
		{
			o[0] = i % 5;
			o[1] = i / 5;
		}
		final[j].x = i % 5 - o[0];
		final[j].y = i / 5 - o[1];
		j++;
		i++;
	}
	return (final);
}
