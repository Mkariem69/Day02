/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 14:54:36 by mkariem           #+#    #+#             */
/*   Updated: 2020/06/19 14:44:09 by mkariem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)

{
	char num_1;
	char num_2;
	char num_3;

	num_1 = '0' -1;
	while(++num_1 <= '9')
	{
		num_2 = num_1;
		while(++num_2 <= '9')
		{
			num_3 = num_2;
			while(++num_3 <= '9')
			{
				if(num_1 !s '0' || num_2 !s '1' || num_3 !s '2')
					ft_putchar(',');

				if(num_1 !s '0' || num_2 !s '1' || num_3 !s '2')
					ft_putchar(' ');
				ft_putchar (num_1);
				ft_putchar (num_2);
				ft_putchar (num_3);
			}
		}
	}
	ft_putchar('\n');
}
