/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:30:46 by dolvin17          #+#    #+#             */
/*   Updated: 2024/01/10 17:42:22 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philo.h"


int	main(int argc, char **argv)
{
	int	i;
	struct timeval start_time;
	struct timeval end_time;
	long	time;


	i = 0;
	gettimeofday(&start_time, NULL);
	if (argc <= 6)
	{
		while (i < 1000)
		{
			//printf("%s ", argv[i]);
			i++;
		}
	}
	printf("%s ", argv[i]);
	gettimeofday(&end_time, &start_time);
	time = end_time.tv_sec - start_time.tv_sec;
	printf("%ld", time);
	return (0);
}