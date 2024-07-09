/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 06:01:12 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/07 21:36:47 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (i < nb)
	{
		if ((nb % i == 0))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main (void)
{
	printf("%d\n", ft_is_prime(91));
}*/
