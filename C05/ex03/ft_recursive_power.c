/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 05:53:40 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/07 16:50:23 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	if (power == 0)
	{
		return (1);
	}
	return (0);
}
/*
int main (void)
{
    int a = 5;
    int d = 2;
    int b = 0;
    int c = -2;

    printf("%d\n",ft_recursive_power(a,d));
    printf("%d\n",ft_recursive_power(b,0));
    printf("%d\n",ft_recursive_power(c,-2));

}*/
