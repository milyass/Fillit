/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_case_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:18:19 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:18:58 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_case_two(char *str)
{
	if (is_sum_of_chars(str) == 732 && ft_strlen(str) == 20)
	{
		if ((iscounter(str, '#') == 4) && (iscounter(str, '.') == 12) &&
				(iscounter(str, '\n') == 4) && (iscontact(str) == 1))
			return (1);
	}
	return (0);
}
