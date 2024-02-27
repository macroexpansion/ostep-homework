#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("hello world (pid:%d)\n", (int)getpid());
    int rc = fork();
    printf("after forked\n");
    if (rc < 0) {
        printf("error");
        exit(1);
    } else if (rc == 0) {
        printf("hello, im child\n");
    } else {
        printf("hello, im parent\n");
    }
    return 0;
}
