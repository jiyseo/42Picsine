/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 03:17:49 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/28 18:16:24 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_base(char*base);
int	ft_atoi(char *str, char *base);

int	get_divisor(int nbr, int radix, int *digit_count)
{
	int	divisor;
	int	n;

	if (nbr < 0)
		n = -nbr;
	else
		n = nbr;
	*digit_count = 1;
	divisor = 1;
	while (n >= radix)
	{
		n /= radix;
		divisor *= radix;
		++*digit_count;
	}
	return (divisor);
}

char	*ft_itoa(int nbr, char *base, int	radix)
{
	unsigned int	n;
	         int	divisor;
	         int	size;
	        char	*buf;

	if (radix < 2)
		return (NULL);
	divisor = get_divisor(nbr, radix, &size);
	buf = (char *)malloc(sizeof(char) * (size + 2));
	size = 0;
	if (nbr < 0)
	{
		buf[size++] = '-';
		nbr = -nbr;
	}
	n = nbr;
	while (divisor > 0)
	{
		buf[size++] = base[n / divisor];
		n %= divisor;
		divisor /= radix;
	}
	buf[size] = '\0';
	return (buf);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	 int	n;
	 int	radix_to;
	char	*num;
	char	*ibase;
	char	*obase;

	num = nbr;
	ibase = base_from;
	obase = base_to;
	if (count_base(ibase) < 2)
		return (NULL);
	radix_to = count_base(obase);
	n = ft_atoi(num, ibase);
	return (ft_itoa(n, obase, radix_to));
}
