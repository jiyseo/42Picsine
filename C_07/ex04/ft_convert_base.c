/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 03:17:39 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/28 18:14:19 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_digit_map[256];

int	count_base(char *base)
{
	          int	cnt;
	unsigned char	ch;

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
		if (ch == '-' || ch == '+' || g_digit_map[ch] >= 0)
			return (0);
		g_digit_map[ch] = cnt;
		cnt++;
	}
	return (cnt);
}

char	*skip_whitespace(char *str)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	return (str);
}

char	*get_sign(char *str, int *sign)
{
	*sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			*sign = - *sign;
		str++;
	}
	return (str);
}

int	ft_atoi(char *str, char *base)
{
	unsigned int	n;
	         int	radix;
	         int	sign;
	         int	digit;

	radix = count_base(base);
	str = skip_whitespace(str);
	str = get_sign(str, &sign);
	n = 0;
	while (*str != '\0')
	{
		digit = g_digit_map[(unsigned char)*str++];
		if (digit < 0)
			break ;
		n = n * radix + digit;
	}
	return (n * sign);
}
