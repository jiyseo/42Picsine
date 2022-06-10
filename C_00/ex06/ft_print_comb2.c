/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:31:15 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/27 03:42:42 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	print_comma(int flag)
{
	if (flag == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	flag;

	a = 0;
	flag = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_comma(flag);
			print_num(a);
			ft_putchar(' ');
			print_num(b);
			flag = 1;
			b++;
		}
		a ++;
	}
}
