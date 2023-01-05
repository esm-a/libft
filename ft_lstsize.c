/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabkadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:39:59 by iabkadri          #+#    #+#             */
/*   Updated: 2022/10/20 10:40:52 by iabkadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nnode;

	nnode = 0;
	while (lst != NULL)
	{
		nnode++;
		lst = lst->next;
	}
	return (nnode);
}
