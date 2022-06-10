void	ft_fun(int nb1, int nb2, (*f)(int, int))
{
	f(nb1, nb2);
}

int	main(int argc, char **argv)
{
	int nb1;
	int nb2;

	nb1 = atoi(argv[1]);
	if (argc != 4)
		return (0);
	if (argv[2][0] == '+')
		ft_fun(nb1, nb2, &ft_plu);
	else if 
}
