/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 13:30:03 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/27 12:22:36 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_digit_map[256];

int	count_base(char*base)
{
	 int	cnt;
	char	ch;

	cnt = 0;
	while (cnt < 256)
		g_digit_map[cnt++] = -1;
	cnt = 0;
	while (1)
	{
		ch = base[cnt];
		if (ch == '\0')
			break ;
		if (ch == ' ' || (ch >= 9 && ch <= 13))
			return (0);
		if (ch == '-' || ch == '+' || g_digit_map[(unsigned char)ch] >= 0)
			return (0);
		g_digit_map[(unsigned char)ch] = cnt;
		cnt++;
	}
	return (cnt);
}

unsigned int	ft_atoi_base_num(char *str, int	radix)
{
	        char	ch;
	unsigned int	n;
	         int	digit;

	n = 0;
	while (*str != '\0')
	{
		ch = *str++;
		digit = g_digit_map[(unsigned char)ch];
		if (digit < 0)
			break ;
		n = n * radix + digit;
	}
	return (n);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	radix;
	int	sign;

	radix = count_base(base);
	if (radix < 2)
		return (0);
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	return (ft_atoi_base_num(str, radix) * sign);
}
