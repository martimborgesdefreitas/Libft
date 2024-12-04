/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:46:27 by marvin            #+#    #+#             */
/*   Updated: 2024/12/02 21:46:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*new;
	const unsigned char	*source;

	new = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (new > source && new < source + n)
	{
		i = n;
		while (i > 0)
		{
			i--;
			new[i] = source[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
