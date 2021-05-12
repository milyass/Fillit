/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isaddtetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:12:10 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:22:37 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	isaddtetri(t_tetri *first, t_tetri *added)
{
	t_tetri *temp;

	temp = first;
	while (temp->next)
		temp = temp->next;
	temp->next = added;
}
