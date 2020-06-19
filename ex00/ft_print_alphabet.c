/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 12:34:08 by mkariem           #+#    #+#             */
/*   Updated: 2020/06/19 12:28:45 by mkariem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char c)

void ft_print_alphabet(void)
{
	char letter;
	letter ='a';
	while(letter <= 'z')
	{
		ft_putchar(letter);

		letter++;
	}
}
