/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/30 17:52:07 by candace       #+#    #+#                 */
/*   Updated: 2021/04/20 17:13:10 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int     main(void)
{
    int fd;
    char  *line;
    int ret = 1;
    fd = open("main.c", O_RDONLY);
    while (ret > 0)
    {
        ret = get_next_line(fd, &line);
       printf("%d\n", printf("%i%s \n", ret, line));
        if (ret == -1)
            break;
	free(line);
	}
}
