/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:16:08 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/03 17:35:49 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;

	k = 0;
	while (src[k])
	{
		k++;
	}
	if (size < 1)
	{
		return (k);
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (k);
}

/*
int main()
{
	char dest[6]="this";
	char src[]="happy";
	unsigned int i = ft_strlcpy(dest,src,6);
	printf("%d",i);
	printf("%s",dest);
}*/
