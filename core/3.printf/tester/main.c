/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:27:44 by yamir             #+#    #+#             */
/*   Updated: 2025/12/13 12:28:20 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"
#include <stdio.h>

t_test	tests[] = {};

int	main(void)
{
	int	passed;
	int	total;
	int	i;

	i = 0;
	passed = 0;
	total = sizeof(tests) / sizeof(tests[0]);
	printf(YELLOW "------------------------------\n" RESET);
	while (i < total)
	{
		if (tests[i].fn())
		{
			passed++;
		}
		i++;
	}
	printf(YELLOW "------------------------------\n" RESET);
	printf(YELLOW "\n%d/%d tests passed\n" RESET, passed, total);
	return (passed == total ? 0 : 1);
}
