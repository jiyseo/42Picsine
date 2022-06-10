#include <stdlib.h>

int	in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		++charset;
	}
	return (0);
}

long long	ft_word_cnt(char *str, char *charset)
{
	long long	cnt;

	cnt = 0;
	while (*str)
	{
		if (!in_charset(*str, charset))
		{
			++cnt;
			while (*str && !in_charset(*str, charset))
				++str;
		}
		++str;
	}
	return (cnt);
}

void	ft_strcpy(char *dst, char *from, char *untill)
{
	while (from < untill)
		*(dst++) = *(from++);
	*dst = 0;
}

char	**ft_split(char *str, char *charset)
{
	     char	**res;
	long long	i;
	     char	*from;

	res = (char **)malloc(sizeof(char *) * ft_word_cnt(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!in_charset(*str, charset))
		{
			from = str;
			while (*str && !in_charset(*str, charset))
				++str;
			res[i] = (char *)malloc(str - from + 1);
			ft_strcpy(res[i++], from, str);
		}
		++str;
	}
	res[i] = 0;
	return (res);
}
