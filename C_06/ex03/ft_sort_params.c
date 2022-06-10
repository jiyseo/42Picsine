/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyseo <jiyseo@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:26:36 by jiyseo            #+#    #+#             */
/*   Updated: 2021/09/25 16:29:10 by jiyseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char	*str)
{
	while (*str != '\0')
	{
		write(1, str++, 1);
	}
}

void	ft_swap(char	**str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 != '\0' && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_sort(char	**argv, int	argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	int	i;

	i = 1;
	if (argc > 2)
		ft_sort(argv, argc);
	while (i < argc)
	{
		ft_print(argv[i]);
		i++;
		write(1, "\n", 1);
	}
}
