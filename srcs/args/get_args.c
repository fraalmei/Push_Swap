/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraalmei <fraalmei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:50:58 by fraalmei          #+#    #+#             */
/*   Updated: 2023/02/10 14:46:31 by fraalmei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long	ft_atoi_long(const char *str)
{
	int					i;
	long				k;
	int					l;

	i = 0;
	l = 1;
	k = 0;
	if (!ft_strncmp(str, "-2147483648", 11))
		return (-2147483648);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			l = -1;
	while (str[i] >= '0' && str[i] <= '9')
		k = (str[i++] - '0') + (k * 10);
	if (k >= -2147483648 && k <= 2147483647)
		return (k * l);
	return (-2147483649);
}

int	ft_isint(char	*nbr)
{
	unsigned int	i;

	i = 0;
	if (nbr[i] == '-' && ft_isdigit(nbr[i + 1]))
		i++;
	while (nbr[i])
	{
		if (ft_isdigit(nbr[i]))
			i++;
		else
			return (0);
	}
	if ((ft_atoi_long(nbr)) == -2147483649)
		return (0);
	return (1);
}

int	ft_lstduplicates(t_lst *lst)
{
	t_lst	*frst;
	t_lst	*dup;

	frst = lst;
	while (frst)
	{
		dup = frst->next;
		while (dup)
		{
			if (frst->content == dup->content)
				return (1);
			dup = dup->next;
		}
		frst = frst->next;
	}
	return (0);
}

int	ft_get_split_args(char **c, t_lst **lst)
{
	int		l;

	l = 0;
	while (c[l])
	{
		if (ft_isint(c[l]))
			ft_lstadd_bck(lst, ft_lstnw(ft_atoi(c[l])));
		else
		{
			ft_free_array_str(c, 0);
			return (0);
		}
		l++;
	}
	ft_free_array_str(c, 0);
	return (1);
}

int	ft_getargs(t_lst **lst, char **argv)
{
	int		i;
	int		e;

	i = 1;
	e = 1;
	while (argv[i])
	{
		if (ft_isint(argv[i]) && e == 1)
			ft_lstadd_bck(lst, ft_lstnw(ft_atoi(argv[i])));
		else if (ft_strchr_nbr(argv[i], 32) != -1 && e == 1)
			e = ft_get_split_args(ft_split(argv[i], 32), lst);
		else
			return (0);
		i++;
	}
	return (e);
}
