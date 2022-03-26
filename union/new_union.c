/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_union.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisner <aisner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:04:23 by aisner            #+#    #+#             */
/*   Updated: 2022/03/04 15:32:47 by aisner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(1, s, 255);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(int argc, char ** argv)
{
    int used[255];
    int i, j;

    if (argc == 3)
    {
        i = 0;
        while (i < 255)
            used[i++] = 0;
        i = 1;
        while (i < 3)
        {
            j = 0;
            while (argv[i][j])
            {
                if (!used[(unsigned char)argv[i][j]])
                {
                    used[(unsigned char)argv[i][j]] = 1;
                     
                    write(1, &argv[i][j], 1);
                }
                j++;
            }
            i++;
        }
    } 
    write(1, "\n", 1);
	return (0);
}