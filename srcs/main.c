/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:25:01 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:49:17 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int			fd;
	char		**tab;
	t_tetri		*tetris;
	int			size;

	if (argc != 2)
	{
		is_usage();
		return (1);
	}
	tab = istabgen();
	fd = open(argv[1], O_RDONLY);
	if (!(tetris = isread(fd)))
	{
		iserror();
		return (1);
	}
	close(fd);
	size = istetrisize(tetris);
	isinittab(tab, size);
	isbacktrack(tetris, tab, size);
	isprinttab(tab);
	return (0);
}
