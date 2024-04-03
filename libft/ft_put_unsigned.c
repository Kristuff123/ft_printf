/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krs <kristuff86@icloud.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:13:22 by krs               #+#    #+#             */
/*   Updated: 2024/03/27 17:13:45 by krs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putuns(unsigned long n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789";
	if (n > (ft_strlen(base) - 1))
		len += ft_putuns(n / ft_strlen(base));
	len += ft_putchar(*(base + (n % ft_strlen(base))));
	return (len);
}
