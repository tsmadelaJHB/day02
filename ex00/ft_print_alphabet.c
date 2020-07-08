/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 09:06:10 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/08 09:23:10 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
		int i;
		char *str;

		i = 0;
		str = "abcdefghijklmnopqrstuvwxyz\0";
		while(str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}
