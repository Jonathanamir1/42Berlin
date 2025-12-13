/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_runner.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamir <yamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:26:43 by yamir             #+#    #+#             */
/*   Updated: 2025/12/13 16:53:09 by yamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TEST_RUNNER_H
# define TEST_RUNNER_H


#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"
# define RESET "\033[0m"

typedef struct s_test_case
{
	const char	*name;
	int			(*run)(void);
}				t_test_case;



#endif
