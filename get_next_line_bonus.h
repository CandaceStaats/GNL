/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: candace <candace@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/03/16 11:59:38 by candace       #+#    #+#                 */
/*   Updated: 2021/04/22 11:17:16 by candace       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <limits.h>

size_t	ft_strlen(char const *str);
void	ft_bzero(void *s, size_t n);
int		ft_isnewline(char *s);
char	*ft_linetransfer(char **line, char *leftover);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		get_next_line(int fd, char **line);
int		ft_iswhat(char *s, int check);

#endif