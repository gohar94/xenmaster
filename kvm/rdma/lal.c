#include <unistd.h>
#include <stdio.h>

int main(void)
{
    char *argv[] = { "/home/xenmaster/Desktop/xenmaster/kvm/rdma/echoc", "-c", "env", 0 };
    char *envp[] =
    {
        "HOME=/",
        "PATH=/bin:/usr/bin",
        "TZ=UTC0",
        "USER=beelzebub",
        "LOGNAME=tarzan",
        0
    };
    execve(argv[0], &argv[0], envp);
    fprintf(stderr, "Oops!\n");
    return -1;
}
