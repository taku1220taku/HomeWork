/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumasan <kumasan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 22:41:01 by kumasan           #+#    #+#             */
/*   Updated: 2025/09/08 23:18:08 by kumasan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*p;

	if (max <= min)
		return (0);
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p != NULL)
	{
		while (min < max)
		{
			*p = min;
			++p;
			++min;
		}
		return (p - (max - min));
	}
	else
		return (0);
}

// #include <stdio.h>
// int main()
// {
// 	int	*s;

// }
