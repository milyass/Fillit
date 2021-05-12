/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 16:27:07 by milyass           #+#    #+#             */
/*   Updated: 2018/12/01 20:59:34 by aessaid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>

typedef struct		s_cord
{
	int				x;
	int				y;
}					t_cord;

typedef	struct		s_tetri
{
	t_cord			*cord;
	char			letter;
	struct s_tetri	*next;
}					t_tetri;

int					is_case_one(char *str);
int					is_case_two(char *str);
int					is_sum_of_chars(char *str);
void				is_usage(void);
void				isaddtetri(t_tetri *first, t_tetri *added);
int					isbacktrack(t_tetri *tet, char **map, int size);
int					iscontact(char *str);
t_cord				*cord(char *str);
void				iscorrect(void);
int					iscounter(char *str, char c);
void				iserror(void);
void				isincorrect(void);
void				isinittab(char **tab, int size);
t_tetri				*isnewtetri(char letter, t_cord *cord);
int					isplace(t_tetri *tet, char **map, int x, int y);
void				isprinttab(char **tab);
t_tetri				*isread(int fd);
char				**istabgen(void);
int					istetrisize(t_tetri *first);
int					isunplace(t_tetri *tet, char **map, int x, int y);
int					isvalid(char *str);

#endif
