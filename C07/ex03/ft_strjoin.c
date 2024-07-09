/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabraham <sabraham@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:36:17 by sabraham          #+#    #+#             */
/*   Updated: 2023/03/11 23:57:34 by sabraham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int	strs_len(int size, char **strs)
{
	int	i;
	int	len;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	sep_len(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	i++;
	return (i);
}

char	*join(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			res[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			res[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		se_len;
	int		st_len;
	int		l_idx;

	if (size == 0)
	{
		res = (char *)malloc(1);
		return (res);
	}
	se_len = sep_len(sep);
	st_len = strs_len(size, strs) + 1;
	l_idx = st_len + (se_len * (size - 1));
	res = (char *) malloc(sizeof(char) * st_len + (se_len * (size - 1)));
	join(size, strs, sep, res);
	res[l_idx - 1] = '\0';
	return (res);
}
/*
int main()
{
  char *arr[] = {"this", "arena", "adi"};
  char *s;
  s = ft_strjoin(3, arr, "#*#");
  printf("%s\n", s);
  return (0);
}*/
