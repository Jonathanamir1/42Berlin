/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:40:34 by yamir             #+#    #+#             */
/*   Updated: 2025/09/08 16:18:53 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;
	int		size2;

	size2 = size -1;
	i = 0;
	while (i < size2)
	{
		temp = tab[size2];
		tab[size2] = tab[i];
		tab[i] = temp;
		i++;
		size2--;
	}
}
/*
#include <stdio.h>
int main()
{
	int tab[] = { 1,2,3, 4,5,6,7 };
	int size = 7;
	
	ft_rev_int_tab(tab, size);
	
	int i = 0;
	for(i = 0; i < size; i++) {
		printf("%d",tab[i]);
	}
}
*/
