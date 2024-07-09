/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 04:38:14 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/07 16:46:08 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if (nb > 0)
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
	else if (nb == 0)
	{
		nb = 1;
		return (nb);
	}
	return (0);
}
/*
int main (void)
{
	int x = 5;
	int y = 0;
	int z = -2;
	printf("%d\n", ft_iterative_factorial(x));
	printf("%d\n",  ft_iterative_factorial(y));
	printf("%d\n",  ft_iterative_factorial(z));
}*/
