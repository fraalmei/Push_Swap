/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_mov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:12:47 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/13 10:00:37 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	// asign valors of the char to the array
static char	put_var(char a[3], char c1, char c2, char c3)
{
	a[0] = c1;
	a[1] = c2;
	a[2] = c3;
	return (*a);
}

	// compare the last movement and the actual are s
static char	is_s(char a[3], char c1, char c2, char c3)
{
	if ((a[1] == 'a' && c2 == 'b' && c1 == 's') \
		|| (a[1] == 'b' && c2 == 'a' && c1 == 's'))
		(ft_printf ("ss\n"), put_var (*&a, '\0', '\0', '\0'));
	else
		(ft_printf ("s%c\n", a[1]), put_var (*&a, c1, c2, c3));
	return (*a);
}

	// compare the last movement and the actual are r
static char	is_r(char a[3], char c1, char c2, char c3)
{
	if ((a[1] == 'a' && c2 == 'b' && c1 == 'r') \
		|| (a[1] == 'b' && c2 == 'a' && c1 == 'r'))
		(ft_printf ("rr\n"), put_var (*&a, '\0', '\0', '\0'));
	else
		(ft_printf ("r%c\n", a[1]), put_var (*&a, c1, c2, c3));
	return (*a);
}

	// compare the last movement and the actual are rr
static char	is_rr(char a[3], char c1, char c2, char c3)
{
	if ((a[2] == 'a' && c3 == 'b') || (a[2] == 'b' && c3 == 'a'))
		(ft_printf ("rrr\n"), put_var (*&a, '\0', '\0', '\0'));
	else
		(ft_printf ("rr%c\n", a[2]), put_var (*&a, c1, c2, c3));
	return (*a);
}

	// function to print the movements
	// comparing the last movement and the actual movement
	// to see if are compatible tto combine in ss,rr or rrr
void	ft_print_mov(char c1, char c2, char c3)
{
	static char		a[3];

	if (a[0] == '\0' && a[2] == '\0')
		put_var (*&a, c1, c2, c3);
	else
	{
		if (a[0] == 's')
			is_s (*&a, c1, c2, c3);
		else if (a[0] == 'r' && a[1] != 'r')
			is_r (*&a, c1, c2, c3);
		else if (a[0] == 'r' && a[1] == 'r')
			is_rr (*&a, c1, c2, c3);
		else if (a[0] == 'p')
			(ft_printf ("p%c\n", a[1]), put_var (*&a, c1, c2, c3));
	}
}
