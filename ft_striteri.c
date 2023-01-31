/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberodr <roberodr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:42:40 by roberodr          #+#    #+#             */
/*   Updated: 2023/01/30 15:32:21 by roberodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	count;	

	count = 0;
	while (c [count])
		count++;
	return (count);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t			len_s;
	unsigned int	i;

	i = 0;
	len_s = ft_strlen(s);
	while (i < len_s)
	{
		f(i, &s[i]);
		i++;
		
	}

}

void	ft_jkl(unsigned int i, char *c)
		{
			
			(void)i;
			if (*c >= 'a' && *c <= 'z')
			{
				*c = *c - 32;
				return;
			}
		}

int main (void)
{
	
	char s[10] = "holas" ;


	

	
	printf("%s\n", s);
			
	ft_striteri(s, ft_jkl);
	
	printf("%s\n", s);
	return (0);
}