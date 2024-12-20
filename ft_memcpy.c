/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Untitled-1                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 21:31:30 by marvin            #+#    #+#             */
/*   Updated: 2024/12/02 21:31:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*copy;

	i = 0;
	source = (unsigned char *)src;
	copy = (unsigned char *)dest;
	while (i < n)
	{
		copy[i] = source[i];
		i++;
	}
	return (dest);
}

/*int	main()
{
	char	*dest = "this should cause an error";
	char	*src = NULL;

	ft_memcpy(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}*/