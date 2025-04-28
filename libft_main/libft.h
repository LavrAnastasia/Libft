#ifndef LIBFT_H
#define LIBFT_H
//libraries

#include <stdio.h>
#include <unistd.h>

//mandatory funtions

int ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);
int ft_isalpha (int c);
int ft_isdigit (int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen (const char *str);
void *memset(void *s, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlcpy(char *dst,const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strdup(const char *s);


#endif 