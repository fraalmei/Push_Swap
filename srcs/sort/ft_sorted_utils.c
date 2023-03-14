/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 09:02:50 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/10 14:47:01 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

	//#### NOTA: estas funciones de comprobación solo determinan el orden
	//#### de los numero que se encuentran en la pila o en grupo
	//#### si hay algun numero fuera que puede ser parte del grupo
	//#### no lo tiene en cuenta
	//#### asique si el numero en discordia entra seguramente rompa el orden

	//funcion para ver si esta ordenada la pila
int	ft_sorted(t_lst **list)
{
	t_lst	*lst;

	lst = *list;
	while (lst->next)
	{
		if (lst->content < lst->next->content)
			lst = lst->next;
		else
			return (0);
	}
	return (1);
}

	//funcion para comprobar el orden de n numeros
int	ft_sorted_n(t_lst **list, int n)
{
	t_lst	*lst;

	lst = *list;
	while ((*list)->next && n != 0)
	{
		if (lst->content < lst->next->content)
			lst = lst->next;
		else
			return (0);
		n--;
	}
	return (1);
}

	//comprobacion de orden inverso de la pila
int	ft_rev_sorted(t_lst **list)
{
	t_lst	*lst;

	lst = *list;
	while (lst->next)
	{
		if (lst->content > lst->next->content)
			lst = lst->next;
		else
			return (0);
	}
	return (1);
}

	//comprobacion el orden inverso de n numeros
int	ft_rev_sorted_n(t_lst **list, int n)
{
	t_lst	*lst;

	lst = *list;
	while (lst->next && n != 0)
	{
		if (lst->content > lst->next->content)
			lst = lst->next;
		else
			return (0);
	}
	return (1);
}
