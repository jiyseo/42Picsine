#include <stdio.h>
#include <stdlib.h>

int	*arr_addr(int	*arr, int	width, int	row, int	col)
{
	return arr + row * width + col;
}

int	make_arr(void)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	arr = malloc(sizeof(int) * 16);

	while (i < 16)
		arr[i] = i;
	
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			
		}
	}
}
