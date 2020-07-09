/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:52:21 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/09 09:15:33 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print_combn(int n)
{
		int a;
		int b;

		a = '0';
		while(a <= '8')
		{
			b = '0';
			while(++b <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				if(a != '8' || b != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			b++;
		}
		a++;
}
