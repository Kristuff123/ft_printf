/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krs <kristuff86@icloud.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:09:26 by krs               #+#    #+#             */
/*   Updated: 2024/03/27 17:10:29 by krs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n)
{
	int	i;

	if (n < 0)
	{
		n = ft_absolut(n);
		i = 1;
	}
	else
		i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

int	ft_putnbr(int n)
{
	int	nbr_len;

	nbr_len = num_len(n);
	ft_putnbr_fd(n, 1);
	return (nbr_len);
}
