/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:30:38 by roberodr          #+#    #+#             */
/*   Updated: 2023/01/30 17:23:59 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			p;
	unsigned char	*str;
	unsigned char	entrada;

	str = (unsigned char *)s;
	entrada = (unsigned char) c;
	p = 0;
	while (p < n)
	{
		if (*str == entrada)
			return (str);
		str++;
		p++;
	}
	return (NULL);
}

#include <stdio.h>
int main (void)
{
	const void *s= "ABCDEF";
	int c = 'u';
	size_t t;
	char *final;

	t = 7;

	final = ft_memchr(s, c, t);

	printf("result: %s\n", final);

return(0);
}
