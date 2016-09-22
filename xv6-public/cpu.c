#include "types.h"
#include "user.h"
#include "syscall.h"
int main(int argc, char *argv[]) 

{
  int i,j,t=100000000;
  while(t--)
    {
      j = 1;
      for(i = 1; i <= 10; i++)
	{
	  j = j*i;
	}
    }
}


