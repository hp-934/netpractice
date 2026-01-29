/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_binary.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaepark <yaepark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:07:04 by yaepark           #+#    #+#             */
/*   Updated: 2026/01/27 13:45:05 by yaepark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	int	num;
	int	binary = 0;
	num = atoi(argv[1]);
	int	i = 0;
	while (i < 8)
	{
		binary = (binary) + ((num & 1) * pow(10, i));
		num = num >> 1;
		i++;
	}
	printf("%d\n", binary);
	return (0);
}
