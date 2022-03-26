/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisner <aisner@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:22:20 by aisner            #+#    #+#             */
/*   Updated: 2022/03/20 22:01:02 by aisner           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int gnl(char **line)
{
    int i;
    int rd;
    char ch;
    ///char *buffer;

    char *string;
  
    string = malloc(sizeof(char) * 5);
    i = 0;
    ///*buffer = malloc(1000000);
    *line = string;
    while((rd = read(0, &ch, 1)) > 0 && ch != '\n')
    {
        string[i++] = ch;
    }
    string[i] = '\0';
    return(rd);
}

 

int main(void)
{
	int		r;
	char	*line;

	line = NULL;
	while ((r = gnl(&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
		line = NULL;
	}
	printf("%s", line);
	free(line);
	line = NULL;
}