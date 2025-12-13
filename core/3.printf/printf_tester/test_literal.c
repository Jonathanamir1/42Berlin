#include "test_runner.h"

int	test_literal(void)
{
	int pipe_fd[2];
	int saved_stdout;
	char buffer[100];
	ssize_t bytes_read;
	int ft;
	int pf;
	int success;

	// Create pipe
	if (pipe(pipe_fd) == -1)
		return (0);

	// Save current stdout
	saved_stdout = dup(1);
	if (saved_stdout == -1)
		return (0);

	// Redirect stdout to pipe write
	dup2(pipe_fd[1], 1);
	close(pipe_fd[1]);

	// Call functions
	pf = printf("Hello");
	ft = ft_printf("Hello");

	// Restore stdout
	dup2(saved_stdout, 1);
	close(saved_stdout);

	/* 6. Read from pipe */
	bytes_read = read(pipe_fd[0], buffer, sizeof(buffer) - 1);
	close(pipe_fd[0]);

	buffer[bytes_read] = '\0';

	/* 7. Compare */
	if (pf != ft)
		printf(GREEN "TEST_LITERAL [OK]" RESET);
	if (strcmp(buffer, "HelloHello") != 0)
		return (0);
	// END TEST
	if (success)
		printf(GREEN "TEST_LITERAL [OK]" RESET);
	else
		printf(RED "TEST_LITERAL [FAIL]" RESET);

	return (success);
}