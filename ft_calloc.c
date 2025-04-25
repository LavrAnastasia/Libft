#ifndef __SIZE_T
#define __SIZE_T
typedef unsigned int size_t;
#endif

void *ft_calloc (size_t nmemb, size_t size)
{
    unsigned char *tmp;
    size_t i;    

    tmp = malloc(nmemb * size);    
    if (!tmp)
        return (0);
    i = 0;
    while (i < nmemb * size)
    {
        tmp[i] = 0;
        i++;
    }
    return (void*)tmp;
}

#include <stdio.h>

int main ()
{
    printf("%s", (char *)ft_calloc(50, 1));

}