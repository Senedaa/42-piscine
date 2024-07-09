/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:24:22 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/03 17:27:23 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_print_hex(char str)
{
	char	output[3];
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	output[0] = hex[(unsigned char)str / 16];
	output[1] = hex[(unsigned char)str % 16];
	output[2] = '\0';
	i = 0;
	while (output[i] != '\0')
	{
		ft_putchar(output[i]);
		i++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_print_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*int main()
{
    char str[] = "This is nice day!";
    ft_putstr_non_printable(str);
    ft_putstr_non_printable("\n");
    return 0;
}*/
