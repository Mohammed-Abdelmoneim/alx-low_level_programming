#include "header.h"

unsigned int binary_to_uint(const char *b)
{
  if (b == NULL)
    return 0;
  
  unsigned int res = 0;
  int i;

  for(i = 0; b[i] != '\0'; i++)
  {
    res = res << 1;

    if (b[i] == '1')
    {
      res = res | 1;
    }
    else if (b[i] != '0')
    {
      return 0;
    }
  }

  return res;
}
