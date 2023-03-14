/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algs_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:11:02 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/15 17:04:03 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	// algorithm to order 3 numbers
	// comparing the 3 numbers
int	ft_sort_3(t_lst **list_a)
{
	while (ft_sorted(list_a) == 0)
	{
		if ((*list_a)->content > (*list_a)->next->content)
		{
			if ((*list_a)->content > ft_lstlst(*list_a)->content)
				r(list_a, 'a');
			else if ((*list_a)->content < ft_lstlst(*list_a)->content)
				s(list_a, 'a');
		}
		else if ((*list_a)->content < (*list_a)->next->content)
		{
			if ((*list_a)->content > ft_lstlst(*list_a)->content)
				rr(list_a, 'a');
			else if ((*list_a)->content < ft_lstlst(*list_a)->content)
				if ((*list_a)->next->content > ft_lstlst(*list_a)->content)
					rr(list_a, 'a');
		}
	}
	return (0);
}

	// algorithm to order 5 numbers
	// search the lesser or the bigger element moving it to the other stack
	// and repeat to have 3 or less elements
	//and call the function for 3
int	ft_sort_5(t_lst **list_a, t_lst **list_b)
{
	int			i;

	i = ft_lstsiz(*list_a);
	while (ft_sorted(list_a) == 0)
	{
		if (ft_lstsiz(*list_a) <= 3)
			ft_sort_3(list_a);
		else if ((*list_a)->content == ft_max(list_a, 0) \
			|| (*list_a)->content == ft_min(list_a, 0))
			p(list_b, list_a, 'b');
		else if (ft_lstlst(*list_a)->content == ft_max(list_a, 0) \
			|| ft_lstlst(*list_a)->content == ft_min(list_a, 0))
			(rr(list_a, 'a'), p(list_b, list_a, 'b'));
		else if ((*list_a)->next->content == ft_max(list_a, 0) \
			|| (*list_a)->next->content == ft_min(list_a, 0))
			r(list_a, 'a');
		else
			rr(list_a, 'a');
	}
	ft_sort_return_5_less(list_a, list_b, i - ft_lstsiz(*list_a));
	return (0);
}

	// algorithm to order more than five numbers
	// search the lesser and the bigger number to divide the stack in 3 parts
	// calling 3 functions to process each group
	// i[0] -> first point of cut
	// i[1] -> second point of cut
	// i[2] -> number of elements of the lesser group
	// i[3] -> number of elements of the middle group
	// i[4] -> number of elements of the bigger group
int	ft_sort_5mor(t_lst **list_a, t_lst **list_b, int len)
{
	int			i[6];

	i[2] = 0;
	i[3] = 0;
	i[4] = 0;
	i[0] = ft_int_frst_third(ft_max(list_a, len), ft_min(list_a, len));
	i[1] = ft_int_scnd_third(ft_max(list_a, len), ft_min(list_a, len));
	i[5] = len;
	ft_split_in_3_a_to_b(list_a, list_b, &*i);
	ft_sort_thrd(list_a, list_b, i[4]);
	ft_sort_scnd(list_a, list_b, i[3]);
	ft_sort_frst(list_a, list_b, i[2]);
	return (0);
}

int	ft_sort_5mor_b(t_lst **list_a, t_lst **list_b, int len, int f_s)
{
	int			i[6];

	i[5] = len;
	if (f_s == 1 && ft_lstsiz(*list_b) != len)
		while (len--)
			(rr(list_b, 'b'));
	i[2] = 0;
	i[3] = 0;
	i[4] = 0;
	i[0] = ft_int_frst_third(ft_max(list_b, i[5]), ft_min(list_b, i[5]));
	i[1] = ft_int_scnd_third(ft_max(list_b, i[5]), ft_min(list_b, i[5]));
	ft_split_in_3_b_to_a(list_a, list_b, &*i);
	ft_sort_thrd(list_a, list_b, i[4]);
	ft_sort_scnd(list_a, list_b, i[3]);
	ft_sort_frst(list_a, list_b, i[2]);
	return (0);
}
