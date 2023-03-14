/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 09:44:51 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/10 14:45:58 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lstprint(t_lst *lst)
{
	while (lst)
	{
		ft_printf ("%s\n", lst->content);
		lst = lst->next;
	}
}

void	ft_lstprintwo(t_lst *lst_a, t_lst *lst_b)
{
	while (lst_a || lst_b)
	{
		if (lst_a && lst_b)
			ft_printf ("%i			%i\n", lst_a->content, lst_b->content);
		else if (lst_b)
			ft_printf ("(null)			%i\n", lst_b->content);
		else if (lst_a)
			ft_printf ("%i			(null)\n", lst_a->content);
		if (lst_a)
			lst_a = lst_a->next;
		if (lst_b)
			lst_b = lst_b->next;
	}
}
