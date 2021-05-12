/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istabgen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:44:51 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:41:36 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**istabgen(void)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	tab = malloc(sizeof(char *) * 21);
	tab[20] = NULL;
	while (i < 20)
	{
		j = 0;
		tab[i] = malloc(21);
		while (j < 20)
			tab[i][j++] = '$';
		tab[i][j] = '\0';
		i++;
	}
	return (tab);
}
