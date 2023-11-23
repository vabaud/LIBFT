/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabaud <vabaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:14:45 by vabaud            #+#    #+#             */
/*   Updated: 2023/11/23 06:27:25 by vabaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    char *buffer;
    char *str;
    static char *tmp;
    size_t byte_read;
    
    byte_read = 1;
    buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    if (!buffer)
        return NULL;
    str = (char *)malloc(sizeof(char) * 10000);
    tmp = (char *)malloc(sizeof(char) * 10000);
    if (!str || !tmp)
        return NULL;
    while (byte_read > 0)
    {
        byte_read = read(fd, buffer, BUFFER_SIZE);
        tmp = ft_strjoin(tmp, buffer);
        if (ft_strchr(tmp, '\n') != NULL)
        {
            ft_strlcpy(str, tmp, ft_strchr(tmp, '\n') - tmp + 2);
            return str;
        }
        printf("%ld ", byte_read);
    }
    return NULL;
}

int main(void)
{
    // Supposons que vous avez un fichier "test.txt" avec le contenu "Hello\nWorld\n"
    int fd = open("test.txt", O_RDONLY);

    if (fd == -1)
    {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    char *line;

    // Première ligne
    line = get_next_line(fd);
    if (line != NULL)
    {
        printf("Ligne lue : %s", line);
        free(line);
    }

    // Deuxième ligne
    line = get_next_line(fd);
    if (line != NULL)
    {
        printf("Ligne lue : %s", line);
        free(line);
    }

    close(fd);

    return 0;
}
