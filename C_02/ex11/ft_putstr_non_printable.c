/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 02:11:14 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/29 10:33:31 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnibble(char c)
{
	c = (unsigned char)c % 16;
	if (c >= 10)
	{
		ft_putchar(c + 'a' - 10);
	}
	else
	{
		ft_putchar(c + '0');
	}
}

void	ft_puthex(char c)
{
	ft_putchar('\\');
	ft_putnibble((unsigned char)c / 16);
	ft_putnibble(c);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			ft_puthex(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}
