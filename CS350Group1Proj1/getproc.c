#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int i = atoi(argv[1]);

    if (i < 1 || i > 9)
    {
        printf(1, "Available options for getproc:\n");
        printf(1, "1 = Total number of processes\n");
        printf(1, "2 = Maximum PID\n");
        printf(1, "3 = Minimum PID\n");
        printf(1, "4 = Number of unused processes\n");
        printf(1, "5 = Number of embryo processes\n");
        printf(1, "6 = Number of sleeping processes\n");
        printf(1, "7 = Number of runnable processes\n");
        printf(1, "8 = Number of running processes\n");
        printf(1, "9 = Number of zombie processes\n");
        return -1;
    }

    uint result = getproc(i);

    if (i == 1)
    {
        printf(1, "Total processes: %d\n", result);
    }
    else if (i == 2)
    {
        printf(1, "Max PID: %d\n", result);
    }
    else if (i == 3)
    {
        printf(1, "Min PID: %d\n", result);
    }
    else if (i == 4)
    {
        printf(1, "Unused processes: %d\n", result);
    }
    else if (i == 5)
    {
        printf(1, "Embryo processes: %d\n", result);
    }
    else if (i == 6)
    {
        printf(1, "Sleeping processes: %d\n", result);
    }
    else if (i == 7)
    {
        printf(1, "Runnable processes: %d\n", result);
    }
    else if (i == 8)
    {
        printf(1, "Running processes: %d\n", result);
    }
    else if (i == 9)
    {
        printf(1, "Zombie processes: %d\n", result);
    }
    else
    {
        printf(2, "getproc: unknown stat %d\n", stat);
        return -1;
    }

    uint pid = getpid();
    kill(pid);

    exit(); // return 0;
}
