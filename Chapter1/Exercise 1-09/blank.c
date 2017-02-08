#include <stdio.h>

int main()
{
  int c;
  int has_blank = 0;
  while( (c = getchar() ) != EOF )
  {
    if ( c == ' ' )
	{
	  if( has_blank == 0 )
	  {
	    has_blank = 1;
	  }else
	    continue;
	}else
	  has_blank = 0;
	putchar(c);
  }

  return 0;
}
