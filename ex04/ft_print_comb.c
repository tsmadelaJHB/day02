/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 10:09:49 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/08 13:35:48 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	ft_print_comb(void)
{
		char a;
		char b;
		char c;

		a = '0';
		while(a <= '7')
		{
			b = a + 1;
			while(b <= '8')
			{
				c = b + 1;
					while(c <= '9')
					{
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(c);
						if(a != '7' || b != '8' || c != '9')
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
						c++;
					}
					b++;
			}
			a++;
		}
}
