/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:14:23 by fraalmei          #+#    #+#             */
/*   Updated: 2023/03/10 10:45:08 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	// create a new node
t_lst	*ft_lstnw(int content)
{
	t_lst	*s;

	s = (t_lst *)ft_calloc(sizeof(*s), 1);
	if (s == NULL)
		return (NULL);
	s->content = content;
	s->next = NULL;
	return (s);
}

	// return a pointer to the last node of the list
t_lst	*ft_lstlst(t_lst *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

	// add a node to the last position of the list
void	ft_lstadd_bck(t_lst **lst, t_lst *new)
{
	t_lst	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlst(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}

	// add a node to the first positioon of the list
void	ft_lstadd_frnt(t_lst **lst, t_lst *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
