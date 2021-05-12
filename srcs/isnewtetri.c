/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isnewtetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:00:40 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:38:07 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*isnewtetri(char letter, t_cord *cord)
{
	t_tetri *result;

	result = malloc(sizeof(t_tetri));
	result->letter = letter;
	result->cord = cord;
	result->next = NULL;
	return (result);
}
