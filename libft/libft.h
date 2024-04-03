/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:21:24 by krs               #+#    #+#             */
/*   Updated: 2024/04/03 21:34:27 by kgraczyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <math.h>

long	ft_absolut(long n);
int		ft_put_adress(void *format);
void	ft_putbase_fd(int nbr, const char *base, int fd);
int		ft_putchar(char c);
int		ft_put_hexadecimal(unsigned long n, char format);
int		ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
int		ft_putstr(char const *s);
int		ft_put_unsigned(unsigned long n);
char	*ft_strchr(char const *str, int c);
size_t	ft_strlen(const char *str);

#endif
