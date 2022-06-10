/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 16:23:44 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/12 20:27:23 by hyunkkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_char(int a, char c1, char c2);

void	print_char(int a, char c1, char c2)
{
	int	i;

	i = 1;
	while (i <= a)
	{
		if (i == 1 || i == a)
		{
			ft_putchar(c1);
		}
		else
		{
			ft_putchar(c2);
		}
		i ++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	if (x <= 0 && y <= 0)
	{
		return ;
	}
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			print_char(x, 'o', '-');
		}
		else
		{
			print_char(x, '|', ' ');
		}
		i++;
	}
}
