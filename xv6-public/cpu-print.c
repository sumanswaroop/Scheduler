#include "types.h"
#include "user.h"
#include "syscall.h"
int main(int argc, char *argv[]) 

{
  int i;
  int count = 0;
  while(count<10)
    {
      for(i = 0; i < 10000000; i++)
	{
	  printf(1,"sec, usec\n");
	}
      count++;
    }
}
