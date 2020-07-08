/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsmadela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 09:35:31 by tsmadela          #+#    #+#             */
/*   Updated: 2020/07/08 09:41:02 by tsmadela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	ft_print_reverse_alphabet(void)
{
		int i;
		char *str;

		i = 0;
		str = "zyxwvutsrqponmlkjihgfedcba\0";
		while(str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}
