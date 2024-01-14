/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:30:46 by dolvin17          #+#    #+#             */
/*   Updated: 2024/01/14 17:57:05 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philo.h"

void	*philo_fn(void *arg)
{
	printf("Hello from philo_fn\n");
	printf("arg = %p\n", arg);
	return (NULL);
}

int	main(int argc, char **argv)
{
	pthread_t	alex;
	pthread_t	nick;

	printf("argv[0] = %s\n", argv[0]);
	if (argc <= 6)
	{

		pthread_create(&alex, NULL, &philo_fn, NULL);
		pthread_create(&nick, NULL, &philo_fn, NULL);
	}
	return (0);
}