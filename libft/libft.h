/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgraczyk <kgraczyk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:21:24 by krs               #+#    #+#             */
/*   Updated: 2024/04/01 14:08:54 by kgraczyk         ###   ########.fr       */
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
int		ft_putad(void *format);
void	ft_putbase_fd(int nbr, const char *base, int fd);
int		ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
int		ft_puthex(unsigned long n, char format);
int		ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
int		ft_putstr(char const *s);
int		ft_putuns(unsigned long n);
char	*ft_strchr(char const *str, int c);
size_t	ft_strlen(const char *str);

#endif
