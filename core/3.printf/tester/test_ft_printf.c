#include "../libftprintf/libftprintf.a
#include "tester.h"
#include <stdio.h>

int	test_ft_printfs(void)
{
	int	success;
	int	val;

	success = 1;
	val = ft_atoi("42");
	if (val != 42)
	{
		printf(RED "[FAIL] ft_atoi(\"42\") -> expected 42, got %d\n" RESET, val);
		success = 0;


    // FINAL CHECKER
	if (success)
		printf(GREEN "[OK]   ft_atoi\n" RESET);
	else
		printf(RED "[FAIL] ft_atoi\n" RESET);
	return (success);
}
