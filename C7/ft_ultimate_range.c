/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumasan <kumasan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 23:01:22 by kumasan           #+#    #+#             */
/*   Updated: 2025/09/08 23:27:14 by kumasan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;

	if (max <= min)
	{
		range = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (p != NULL)
	{
		while (min < max)
			{
				*p = min;
				++p;
				++min;
			}
		p -= (max - min);
		*range = p;
		return (max - min);
	}
	else
		return (-1);
}
