#include <unistd.h>
#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char *stash;
    char buffer[BUFFER_SIZE + 1];
    char *newline;
    
    while (!ft_strchr(stash, '\n'))
    {
        int bytes = read(fd, buffer, BUFFER_SIZE);
        if (bytes <= 0)
            break;
        buffer[bytes] = '\0';
        stash = ft_strjoin_and_free(stash, buffer); // объединить и освободить старую stash
    }

    // выделяем строку до \n
    char *line = extract_line(stash);
    stash = update_stash(stash); // оставляем только то, что после \n

    return line;
}