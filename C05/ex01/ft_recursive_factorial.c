/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 04:42:19 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/07 16:48:39 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	if (nb > 0)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
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
    printf("%d\n", ft_recursive_factorial(x));
    printf("%d\n",  ft_recursive_factorial(y));
    printf("%d\n",  ft_recursive_factorial(z));
}*/
