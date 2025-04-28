#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
#include <stdio.h>
#include <string.h>
int main (void)
{
	int c = 'A';
	int result;
	result = ft_toupper(c);
	printf("%d", result);
	//toupper(c);
	//printf("%d", c);
}