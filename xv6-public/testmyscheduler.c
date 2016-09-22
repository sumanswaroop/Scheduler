#include "types.h"
#include "user.h"
#include "syscall.h"

int
main(int argc, char *argv[])
{   
    printf(1, "Priority %d\n", getprio());
    setprio(5);
    printf(1, "Priority %d\n", getprio());
    exit();
}