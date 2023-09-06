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
  int len = strlen(*av);
  if (ac == 0 || av == NULL)
  {
    return (NULL);
  }
  s = malloc(len * sizeof(char));
  strcpy(s, av[1]);
  strcat(s, "\n");
  for (i = 2; i < ac; i++)
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
