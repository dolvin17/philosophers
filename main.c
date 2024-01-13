/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:30:46 by dolvin17          #+#    #+#             */
/*   Updated: 2024/01/13 23:56:55 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philo.h"


int	main(int argc, char **argv)
{
	int	i;
	struct timeval start_time;
	struct timeval end_time;
	long	time;
	pthread_t thread_id;



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
	thread_function();
	pthread_create(&thread_id, NULL, &thread_function, NULL);
	return (0);
}