/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isunplace.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:20:38 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:42:36 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		isunplace(t_tetri *tet, char **map, int x, int y)
{
	int j;

	j = 0;
	while (j < 4)
	{
		map[y + tet->cord[j].y][x + tet->cord[j].x] = '.';
		j++;
	}
	return (1);
}
