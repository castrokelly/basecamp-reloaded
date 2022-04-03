/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kechrist <kechrist@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 23:32:40 by kechrist          #+#    #+#             */
/*   Updated: 2022/04/03 23:33:00 by kechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*ptr;

	if (min >= max)
		return (ptr = NULL);
	i = 0;
	len = max - min;
	ptr = (int *) malloc (len *(sizeof(int)));
	while (min < max)
		ptr[i++] = min++;
	ptr[i] = '\0';
	return (ptr);
}
