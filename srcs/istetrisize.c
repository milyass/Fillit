/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   istetrisize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:53:58 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:42:05 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		istetrisize(t_tetri *first)
{
	int cnt;
	int i;

	cnt = 0;
	i = 2;
	while (first)
	{
		first = first->next;
		cnt++;
	}
	cnt *= 4;
	while (i * i < cnt)
		i++;
	return (i);
}
