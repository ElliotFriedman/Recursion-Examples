int		factorial(int nbr)
{
	if (nbr > 1)
		return nbr * (factorial(nbr - 1));
	return (1);
}
