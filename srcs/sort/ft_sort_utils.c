/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:07:21 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/16 10:48:58 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	// search the biggernumber in the stack
int	ft_max(t_lst **list, int len)
{
	t_lst	*swap;
	int		max;

	swap = *list;
	max = swap->content;
	if (len <= 0)
	{
		while (swap)
		{
			if (max < swap->content)
				max = swap->content;
			swap = swap->next;
		}
	}
	else
	{
		while (len--)
		{
			if (max < swap->content)
				max = swap->content;
			swap = swap->next;
		}
	}
	return (max);
}

	// search the lesser number of the stack
int	ft_min(t_lst **list, int len)
{
	t_lst	*swap;
	int		min;

	swap = *list;
	min = swap->content;
	if (len <= 0)
	{
		while (swap)
		{
			if (min > swap->content)
				min = swap->content;
			swap = swap->next;
		}
	}
	else
	{
		while (len--)
		{
			if (min > swap->content)
				min = swap->content;
			swap = swap->next;
		}
	}
	return (min);
}

	// search the first cut point
int	ft_int_frst_third(int max, int min)
{
	while (min < max)
		max -= (min++, 2);
	return (max);
}

	// search the second cut point
int	ft_int_scnd_third(int max, int min)
{
	while (min < max)
		min += (max--, 2);
	return (max);
}

int	ft_int_mid(int max, int min)
{
	while (min < max)
		min += (max--, 1);
	return (max);
}
