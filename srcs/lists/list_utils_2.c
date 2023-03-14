/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 12:52:01 by fraalmei          #+#    #+#             */
/*   Updated: 2023/03/10 10:47:28 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	// return the size of the list
int	ft_lstsiz(t_lst *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

	// free the reserved strings of the splited argument
int	ft_free_array_str(char **c, int l)
{
	while (c[l])
		l += (free (c[l]), 1);
	free (c);
	return (0);
}

	// free a complete list
int	ft_free_lst(t_lst *list)
{
	t_lst	*swap;

	while (list)
	{
		swap = list;
		if (list->next)
			list = list->next;
		free (swap);
	}
	return (0);
}
