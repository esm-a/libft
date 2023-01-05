/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iabkadri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:07:38 by iabkadri          #+#    #+#             */
/*   Updated: 2022/10/19 17:10:55 by iabkadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	val;
	int				sign;

	while (_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	val = 0;
	while (ft_isdigit(*str))
		val = val * 10 + (*str++ - '0');
	if (val >= 0x7FFFFFFFFFFFFFFF && sign == 1)
		return (-1);
	if (val > 0x7FFFFFFFFFFFFFFF && sign == -1)
		return (0);
	return (val * sign);
}
