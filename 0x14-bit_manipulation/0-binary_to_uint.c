#include "main.h"

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

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
