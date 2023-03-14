/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algs_utils_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:12:16 by fraalmei          #+#    #+#             */
/*   Updated: 2023/03/10 11:08:29 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	// call the functions to separete and order
int	ft_sort_frst(t_lst **l_a, t_lst **l_b, int len)
{
	int		f;

	f = len;
	if (f > 0 && f <= 3)
	{
		while (len--)
			rr(l_b, 'b');
		ft_sort_return_3(l_a, l_b, f);
	}
	else if (f > 3)
		ft_sort_5mor_b(l_a, l_b, f, 1);
	return (0);
}

int	ft_sort_scnd(t_lst **l_a, t_lst **l_b, int len)
{
	int		s;

	s = len;
	if (s > 0 && s <= 3)
		ft_sort_return_3(l_a, l_b, s);
	else if (s > 3)
		ft_sort_5mor_b(l_a, l_b, s, 0);
	return (0);
}

int	ft_sort_thrd(t_lst **l_a, t_lst **l_b, int len)
{
	int		t;

	t = len;
	if (t == ft_lstsiz(*l_a) && ft_lstsiz(*l_a) <= 3)
		ft_sort_3(l_a);
	else if (t == ft_lstsiz(*l_a) && ft_lstsiz(*l_a) <= 5 && (*l_b)->content)
		ft_sort_5(l_a, l_b);
	else if (t != ft_lstsiz(*l_a))
		while (--len >= 0)
			rr(l_a, 'a');
	if (t <= 2)
		ft_sort_2_or_less_top(l_a, 'a');
	else if (t <= 3)
		ft_sort_3_top(l_a, 'a');
	else if (t > 3)
		ft_sort_5mor(l_a, l_b, t);
	return (0);
}

int	ft_split_in_3_a_to_b(t_lst **list_a, t_lst **list_b, int i[6])
{
	while (i[5]-- > 0)
	{
		if ((*list_a)->content <= i[0])
			(p(list_b, list_a, 'b'), r(list_b, 'b'), i[2]++);
		else if ((*list_a)->content > i[0] && (*list_a)->content < i[1])
			(p(list_b, list_a, 'b'), i[3]++);
		else if ((*list_a)->content >= i[1])
			(r(list_a, 'a'), i[4]++);
	}
	return (*i);
}

int	ft_split_in_3_b_to_a(t_lst **list_a, t_lst **list_b, int i[6])
{
	int		l;

	while (i[5]-- > 0)
	{
		if ((*list_b)->content <= i[0])
			(r(list_b, 'b'), i[2]++);
		else if ((*list_b)->content > i[0] && (*list_b)->content < i[1])
			(p(list_a, list_b, 'a'), i[3]++);
		else if ((*list_b)->content >= i[1])
			(p(list_a, list_b, 'a'), r(list_a, 'a'), i[4]++);
	}
	l = i[3];
	while (l-- > 0)
		p(list_b, list_a, 'b');
	return (*i);
}

/* 	// work in progress
	// function to dvide a group of nummbers in 2
	// from stack A to B
int	ft_split_in_2_a_to_b(t_lst **list_a, t_lst **list_b, int i)
{
	int		m[3];

	m[0] = ft_int_mid(ft_max(list_b, i), ft_min(list_b, i));
	m[1] = 0;
	m[2] = 0;
	while (i-- > 0)
	{
		if ((*list_b)->content <= m[0])
			(r(list_b, 'b'), m[1]++);
		else if ((*list_b)->content > m[0] && (*list_b)->content < m[0])
			(p(list_a, list_b, 'a'), m[2]++);
	}
	return (0);
}
 */