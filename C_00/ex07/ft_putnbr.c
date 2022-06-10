/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:00:45 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/25 17:20:34 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(unsigned int nb, int divisor)
{
	int	n;

	while (divisor > 0)
	{
		n = nb / divisor;
		nb %= divisor;
		ft_putchar(n + '0');
		divisor /= 10;
	}
}

void	ft_putnbr(int nb)
{
	         int	divisor;
	unsigned int	n;
	unsigned int	a;

	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	else
		n = nb;
	a = n;
	divisor = 1;
	while (n >= 10)
	{
		divisor *= 10;
		n /= 10;
	}
	print_num(a, divisor);
}
