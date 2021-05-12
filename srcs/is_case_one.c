/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_case_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:20:26 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:20:00 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_case_one(char *str)
{
	if (is_sum_of_chars(str) == 742 && ft_strlen(str) == 21)
	{
		if ((iscounter(str, '#') == 4) && (iscounter(str, '.') == 12) &&
				(iscounter(str, '\n') == 5) && (iscontact(str) == 1))
			return (1);
	}
	return (0);
}
