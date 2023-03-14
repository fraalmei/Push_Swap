/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algs_utils_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:53:53 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/16 10:48:39 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	// function to return the numbers (thinked for 2 numbers) pushed to stack b
int	ft_sort_return_5_less(t_lst **l_a, t_lst **l_b, int len)
{
	while (len <= 5 && len > 0)
	{
		if ((*l_a)->content > (*l_b)->content)
			p(l_a, l_b, 'a');
		else if ((*l_a)->content < (*l_b)->content)
		{
			if ((*l_a)->next->content > (*l_b)->content)
				(p(l_a, l_b, 'a'), s(l_a, 'a'));
			else if ((*l_b)->content > ft_lstlst((*l_a))->content)
				(p(l_a, l_b, 'a'), r(l_a, 'a'));
			else if ((*l_b)->content < ft_lstlst((*l_a))->content)
				(rr(l_a, 'a'), p(l_a, l_b, 'a'), r(l_a, 'a'), r(l_a, 'a'));
		}
		len--;
	}
	return (0);
}

int	ft_sort_return_3(t_lst **l_a, t_lst **l_b, int len)
{
	while (len > 0)
	{
		if ((*l_b)->content == ft_max(l_b, len) || len == 1)
			len -= (p(l_a, l_b, 'a'), 1);
		else if ((*l_b)->content == ft_min(l_b, len))
		{
			if ((*l_b)->next->content == ft_max(l_b, len))
				len -= (s(l_b, 'b'), p(l_a, l_b, 'a'), 1);
			else if (len == 3)
				len -= (s(l_b, 'b'), p(l_a, l_b, 'a'), \
					s(l_b, 'b'), p(l_a, l_b, 'a'), s(l_a, 'a'), 2);
			else
				len -= (s(l_b, 'b'), p(l_a, l_b, 'a'), p(l_a, l_b, 'a'), 2);
		}
		else
		{
			if ((*l_b)->next->content == ft_max(l_b, len))
				len -= (s(l_b, 'b'), p(l_a, l_b, 'a'), 1);
			else
				len -= (p(l_a, l_b, 'a'), s(l_b, 'b'), \
					p(l_a, l_b, 'a'), s(l_a, 'a'), 2);
		}
	}
	return (0);
}
