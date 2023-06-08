#include "main.h"

int _square_div(int num, int i)
{
  if (num % (i*i))
    {
      return (1);
    }
  else
    {
      _square_div(num, i+1);
    }
}




int _sqrt_recursion(int n)
{
        if (n < 0)
        {
                return (-1);
        }
        else if (n == 0)
        {
                return (0);
        }
        else if (n == 1)
          {
            return (1);
          }
        else
        {
                j = _square_div(2)
                return (_sqrt_recursion(n / (j * j));
        }
}
