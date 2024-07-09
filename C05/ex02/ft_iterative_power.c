/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 05:51:21 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/09 15:01:16 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	temp = nb;
	while (--power)
		temp *= nb;
	return (temp);
}
/*
int main (void)
{
	int b,c;
    b=-5;
    c=2;
    printf("%d\n", ft_iterative_power(b,c));
}*/
