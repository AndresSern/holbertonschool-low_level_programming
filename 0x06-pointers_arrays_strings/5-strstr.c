#include "holberton.h"
#include <stdlib.h>
char *_strstr(char *haystack, char *needle)
{
    int a, b, d;
    d = 0;
    for(b = 0; needle[b] != '\0'; b++)
    {
    }
    for(a = 0; haystack[a] != '\0'; a++)
    {
          for(; needle[d] != '\0' && needle[d] == haystack[a]; )
          {
                d += 1;
                if(d == b)
                      return haystack;

                break;

          }
    }
    return 0;
}
