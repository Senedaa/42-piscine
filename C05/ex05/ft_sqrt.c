/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 06:00:25 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/07 21:01:23 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_find_sqrt(int nb, int i)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (i);
	return (ft_find_sqrt(nb - (1 + (2 * i)), i + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_find_sqrt(nb, 0));
}
/*
int    main(void)
{
    printf("%d", ft_sqrt(64));
    printf("\n%d", ft_sqrt(144));
    printf("\n%d", ft_sqrt (2146468900));
}*/
