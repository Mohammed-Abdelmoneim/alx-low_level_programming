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
  char *s;
  int i;
  if (ac == 0 || av == NULL)
  {
    return (NULL);
  }
  s = (char *)malloc(strlen(*av)  + 1 * sizeof(char));
  printf("%ld", strlen(*av));
  strcpy(s, av[0]);
  strcat(s, "\n");
  for (i = 1; i < ac; i++)
  {
    strcat(s, av[i]);
    strcat(s, "\n");
  }
  if (s == NULL)
  {
    return NULL;
  }
  return (s);
}
