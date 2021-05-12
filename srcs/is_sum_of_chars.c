/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sum_of_chars.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:17:27 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:25:52 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_sum_of_chars(char *str)
{
	int sum;
	int i;
	int len;

	sum = 0;
	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		sum = sum + str[i];
		i++;
	}
	return (sum);
}
