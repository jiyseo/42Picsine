/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:20:37 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/27 18:36:57 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	comb_init(int	*num, int	n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		num[i] = i;
		i++;
		n--;
	}
}

int	comb_next(int	*num, int	n)
{
	int	i;
	int	digit;
	int	max_digit;

	max_digit = 9;
	i = n - 1;
	while (i >= 0)
	{
		digit = num[i];
		if (digit < max_digit)
		{
			while (i < n)
				num[i++] = ++digit;
			return (1);
		}
		max_digit--;
		i--;
	}
	return (0);
}

void	comb_print(int	*num, int	n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(num[i] + '0');
		i++;
	}
}

void	ft_print_combn(int	n)
{
	int	num[10];
	int	flag;

	flag = 0;
	comb_init(num, n);
	while (1)
	{
		if (flag == 0)
			flag = 1;
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		comb_print(num, n);
		if (comb_next(num, n) == 0)
			break ;
	}
}

int	main(void)
{
	ft_print_combn(4);
}
