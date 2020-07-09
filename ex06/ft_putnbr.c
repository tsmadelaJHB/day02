void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
		if(nb < 0)
		{
			nb = nb * -1;
			ft_putchar('-');
		}
		if(nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putchar((nb % 10) + '0');
		}
		else
			ft_putchar(nb + '0');
}
