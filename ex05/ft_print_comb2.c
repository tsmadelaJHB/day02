/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 11:40:25 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/08 16:01:54 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
		char a;
		char b;
		char e;
		wqchar d;

		a = '0';
		while(a <= '9')
		{
			b = '0';
			while(b <= '8')
			{
				e = a;
				while(e <= '9')
				{
					d = b + 1;
					while(d <= '9')
					{
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(' ');
						ft_putchar(e);
						ft_putchar(d);
					//	if(a != '9' || b != '8' || e != '9' || d != '9')
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
						d++;
					}
					e++;
				}
				b++;
			}
			a++;
		}
}
