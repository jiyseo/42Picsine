/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:38:22 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/18 20:25:05 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 'a' - 'A';
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 'a' - 'A';
			flag = 1;
		}
		else
			flag = 0;
		i ++;
	}
	return (str);
}
