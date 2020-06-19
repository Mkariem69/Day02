/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 13:25:59 by mkariem           #+#    #+#             */
/*   Updated: 2020/06/19 12:58:18 by mkariem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char c)

void ft_print_reverse_alphabet(void)

{
	char letter;
	letter = 'z';
	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}

}
