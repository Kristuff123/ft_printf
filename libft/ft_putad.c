/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putad.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:01:35 by krs               #+#    #+#             */
/*   Updated: 2024/03/28 16:30:06 by krs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	print_helper(unsigned long n, const char *base)
{
	int	len;
	int	res;

	len = 0;
	if (n > (ft_strlen(base) - 1))
	{
		res = print_helper(n / ft_strlen(base), base);
		if (res < 0)
			return (-1);
		len += res;
	}
	res = ft_putchar(*(base + (n % ft_strlen(base))));
	if (res < 0)
		return (-1);
	len += res;
	return (len);
}

int	ft_putad(void *format)
{
	unsigned long	n;
	const char		*base;
	int				len;
	int				res;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	res = ft_putstr("0x");
	if (res < 0)
		return (-1);
	len = res;
	res = print_helper(n, base);
	if (res < 0)
		return (-1);
	len += res;
	return (len);
}
