/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aananiev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:22:11 by aananiev          #+#    #+#             */
/*   Updated: 2024/03/17 20:47:58 by aananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int     main(void){
        char     i;
        i = '9';
        while (i >= '0')
        {
                write(1, &i, 1);
                i--;
        }
        write(1, "\n", 1);
	return (0);
}