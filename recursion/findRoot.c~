#include <main.h>
#include <unistd.h>

int root(int i, int j, int number)
{
  if( i <= j )
    {
      int mid = (i + j) / 2;
      if ((mid * mid <= number) && ((mid + 1) * (mid + 1) > number)) {
	return mid;
      }
      else if (mid * mid < number)
	{
	  return root(mid + 1, j, number);
	}
      else
	{
	  return root(i, j - 1, number);
	}
    }
  return low;
}
