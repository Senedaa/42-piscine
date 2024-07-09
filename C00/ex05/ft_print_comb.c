/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 22:06:10 by sabraham          #+#    #+#             */
/*   Updated: 2023/02/26 21:23:28 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char i, char j, char z)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &z, 1);
	if (!(i == '7' && j == '8' && z == '9'))
	{
		write (1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a, b, c);
			c++;
			}
		b++;
		}
	a++;
	}
}
