/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:39:27 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/03 16:24:00 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
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
    char a[]={1,2,3,4};
    char b[]="12This is the best";
    char d[]="1234";
    char e[]="";

    printf("%d\n",ft_str_is_numeric(a));
    printf("%d\n",ft_str_is_numeric(b));
    printf("%d\n",ft_str_is_numeric(d));
    printf("%d\n",ft_str_is_numeric(e));
}*/
