/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessaid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:46:43 by aessaid           #+#    #+#             */
/*   Updated: 2018/12/01 20:46:47 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*isread(int fd)
{
	char	buff[22];
	int		r;
	int		k;
	t_tetri *tetris;

	k = 0;
	tetris = NULL;
	while ((r = read(fd, buff, 21)))
	{
		buff[r] = '\0';
		if (!isvalid(buff))
			return (NULL);
		if (tetris == NULL)
			tetris = isnewtetri('A', cord(buff));
		else
			isaddtetri(tetris, isnewtetri('A' + k, cord(buff)));
		k++;
	}
	if (k > 26)
		return (NULL);
	if (r == 0 && buff[20] != '\0')
		return (NULL);
	return (tetris);
}
