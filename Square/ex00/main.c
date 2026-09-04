/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aexcelle <aexcelle@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 12:31:10 by aexcelle          #+#    #+#             */
/*   Updated: 2026/08/09 15:45:10 by mbougear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int     main(int argc, char **argv)
{
	if (argc == 3)
        rush(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
