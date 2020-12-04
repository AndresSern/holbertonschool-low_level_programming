#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av);
char *_strcat(char *dest, char *src);

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    return (0);
}
char *argstostr(int ac, char **av)
{
    int index;
    char *p = "hola";
        if(ac == 0 || av == NULL)
                return (0);
        for(index = 0; av[index] && index < ac; index++)
        {
		
        }
	printf("\n");
    return (p);
}
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a] = src[b];
	a++;
	}
	return (dest);
}

