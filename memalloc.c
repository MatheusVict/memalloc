#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    int i=0;
    while(1)
    {
        void *m = malloc(1024*1024);
        memset(m,0,1024*1024);
        printf("i: %d\n", i++);
    }
    return 0;
}
