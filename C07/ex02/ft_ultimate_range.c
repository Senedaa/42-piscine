/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:18:55 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/12 13:54:18 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*number;
	int	average;

	i = 0;
	average = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	number = malloc(sizeof (int) * average);
	if (number == NULL)
	{
		return (-1);
	}
	while (i < average)
	{
		number[i] = min;
		i++;
		min++;
	}
	*range = number;
	return (i);
}
/*
int main (void)
{
	int max= 10;
	int min =2;
	int average= max -min;
	int *number[]={};
	printf("%d\n", ft_ultimate_range(number,min,max));
}*/
