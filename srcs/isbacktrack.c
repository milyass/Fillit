/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isbacktrack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:21:05 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 21:12:17 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		isbacktrack(t_tetri *tet, char **map, int size)
{
	int		i;
	int		j;

	i = -1;
	while (map[++i][0] != '$' && (j = -1))
	{
		while (map[i][++j] != '$')
		{
			if (isplace(tet, map, j, i))
			{
				if (!tet->next)
					return (1);
				if (isbacktrack(tet->next, map, size))
					return (1);
				else
					isunplace(tet, map, j, i);
			}
		}
	}
	if (tet && tet->letter == 'A')
	{
		isinittab(map, size + 1);
		isbacktrack(tet, map, size + 1);
	}
	return (0);
}
