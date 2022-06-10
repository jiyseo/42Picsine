/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:06:30 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/26 01:43:59 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	count_base(char	*base)
{	
	 int	cnt;
	char	ch;
	char	flag[256];

	cnt = 0;
	while (cnt < 256)
		flag[cnt++] = 0;
	cnt = 0;
	while (1)
	{
		ch = base[cnt];
		if (ch == '\0')
			break ;
		if (ch == '-' || ch == '+' || flag[(unsigned char)ch] != 0)
			return (0);
		flag[(unsigned char)ch] = 1;
		cnt++;
	}
	return (cnt);
}

unsigned int	ft_sign(int	nbr)
{
	unsigned int	n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = -1 * nbr;
	}
	else
		n = nbr;
	return (n);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	unsigned int	radix;
	unsigned int	divisor;
	unsigned int	n;
	unsigned int	a;

	radix = count_base(base);
	if (radix < 2)
		return ;
	n = ft_sign(nbr);
	a = n;
	divisor = 1;
	while (a >= radix)
	{
		a /= radix;
		divisor *= radix;
	}
	while (divisor > 0)
	{
		ft_putchar(base[n / divisor]);
		n %= divisor;
		divisor /= radix;
	}
}
