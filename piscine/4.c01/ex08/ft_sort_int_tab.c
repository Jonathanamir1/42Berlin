/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:49:04 by yamir             #+#    #+#             */
/*   Updated: 2025/09/08 17:51:35 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		swapped;
	int		temp;

	i = 0;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}
/*
#include <stdio.h>
int main()
{
	int tab[] = { 42, 3, 15, 8 ,99, 3 };
	int size = 6;

	ft_sort_int_tab(tab, size);    
	int i = 0;
	while (i < size){	
		printf("%d",tab[i]);
		i++;
	}
}
*/
