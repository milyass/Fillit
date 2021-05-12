/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isplace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:20:22 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:40:27 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		isplace(t_tetri *tet, char **map, int x, int y)
{
	int j;

	j = 0;
	while (j < 4)
	{
		if (y + tet->cord[j].y < 0 || x + tet->cord[j].x < 0)
			return (0);
		if (map[y + tet->cord[j].y][x + tet->cord[j].x] == '.')
			j++;
		else
			return (0);
	}
	j = 0;
	while (j < 4)
	{
		map[y + tet->cord[j].y][x + tet->cord[j].x] = tet->letter;
		j++;
	}
	return (1);
}
