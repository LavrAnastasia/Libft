int main (void)
{
    int fd = open ("readme.txt", O_RONLY);
    char *line;
    while (line = get_next_line (fd))
    {
        print ("%s", line);
        free (line);
    }
    close(fd);    
}