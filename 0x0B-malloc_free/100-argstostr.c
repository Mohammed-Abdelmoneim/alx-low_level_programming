#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 *@ac: number of args
 *@s2: args string
 *
 * Return: 0 success
 */
char *argstostr(int ac, char **av)
{
  int total_len = 0;
  char *s;
  int offset = 0; 
  int i;
  if (ac == 0 || av == NULL)
  {
    return NULL;
  }

  for (i = 0; i < ac; i++)
  {
    total_len += strlen(av[i]) + 1; 
  }

  s = (char *)malloc(total_len);
  if (s == NULL)
  {
    return NULL; 
  }


  for (i = 0; i < ac; i++)
  {
    strcpy(s + offset, av[i]);
    offset += strlen(av[i]);
    s[offset++] = '\n'; 
  }

  return s;
}
