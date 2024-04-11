/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:13:22 by krs               #+#    #+#             */
/*   Updated: 2024/04/11 21:24:32 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_unsigned(unsigned long n)
{
	int		length;
	char	*base;

	base = "0123456789";
	if (!base || !*base)
		return (0);
	length = 0;
	if (n > (ft_strlen(base) - 1))
		length += ft_put_unsigned(n / ft_strlen(base));
	length += ft_putchar(*(base + (n % ft_strlen(base))));
	return (length);
}
