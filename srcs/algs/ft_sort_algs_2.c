/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algs_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 10:42:21 by fraalmei          #+#    #+#             */
/*   Updated: 2023/03/10 11:06:36 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_sort_2_or_less_top(t_lst **list, char nam_l)
{
	if (0 == ft_sorted(list))
		s(list, nam_l);
	return (0);
}

	// algorithm to order the first 3 nombers of the stack
	// order with the upper movements
int	ft_sort_3_top(t_lst **list, char nam_l)
{
	if ((*list)->content == ft_max(list, 3))
	{
		if ((*list)->next->content == ft_min(list, 3))
			(s(list, nam_l), r(list, nam_l), s(list, nam_l), rr(list, nam_l));
		else
			(s(list, nam_l), r(list, nam_l), \
				s(list, nam_l), rr(list, nam_l), s(list, nam_l));
	}
	else if ((*list)->content == ft_min(list, 3))
	{
		if ((*list)->next->content == ft_max(list, 3))
			(r(list, nam_l), s(list, nam_l), rr(list, nam_l));
	}
	else
	{
		if ((*list)->next->content == ft_min(list, 3))
			s(list, nam_l);
		else if ((*list)->next->content == ft_max(list, 3))
			(r(list, nam_l), s(list, nam_l), rr(list, nam_l), s(list, nam_l));
	}
	return (0);
}

int	ft_sort_5_top(t_lst **l_a, t_lst **l_b, int len)
{
	int		i;
	int		b;

	i = 0;
	b = 0;
	while (len > 0)
	{
		if (len <= 3 && i == 0 && b == 0)
			ft_sort_3_top(l_a, 'a');
		if ((*l_a)->content == ft_min(l_a, len))
		{
			len -= (r(l_a, 'a'), i++, 1);
			if (b > 0)
				while (b--)
					p(l_b, l_a, 'b');
		}
		else if ((*l_a)->next->content == ft_min(l_a, len))
			len -= (s(l_a, 'a'), r(l_a, 'a'), 1);
		else
			(p(l_b, l_a, 'b'), b++);
	}
	if (i > 0)
		while (i--)
			rr(l_a, 'a');
	return (0);
}
