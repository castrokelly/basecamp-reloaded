/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kechrist <kechrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:31:28 by kechrist          #+#    #+#             */
/*   Updated: 2022/04/03 23:39:21 by kechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i--);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*ptr;

	if (src != NULL)
	{
		i = 0;
		len = ft_strlen(src);
		ptr = (char *) malloc (len *(sizeof(char)));
		while (i <= len)
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
