/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:27:44 by yamir             #+#    #+#             */
/*   Updated: 2025/12/13 16:53:17 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_runner.h"

t_test_case	g_test_cases[] = {};

int	main(void)
{
	int	passed;
	int	total;
	int	i;

	i = 0;
	passed = 0;
	total = sizeof(g_test_cases) / sizeof(g_test_cases[0]);
	printf(YELLOW "------------------------------\n" RESET);
	while (i < total)
	{
		if (g_test_cases[i].run())
		{
			passed++;
		}
		i++;
	}
	printf(YELLOW "------------------------------\n" RESET);
	printf(YELLOW "\n%d/%d tests passed\n" RESET, passed, total);
	return (passed == total ? 0 : 1);
}
