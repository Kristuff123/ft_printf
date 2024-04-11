/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:08:27 by krs               #+#    #+#             */
/*   Updated: 2024/04/11 21:27:04 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_hexadecimal(unsigned long n, char format)
{
	char			*base;
	unsigned int	num;
	int				i;
	unsigned int	base_length;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (!base || !*base)
		return (0);
	i = 0;
	num = (unsigned int)n;
	base_length = ft_strlen(base);
	if (num > (base_length - 1))
		i += ft_put_hexadecimal(num / base_length, format);
	i += ft_putchar(*(base + (num % base_length)));
	return (i);
}
