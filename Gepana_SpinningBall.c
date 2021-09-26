#include <stdio.h>
int main()
{
    int rpm=3000, deg=360, sec=60, d;
    d=rpm*deg/sec;
    printf("Spinning tire rotates %d degrees in one second", d);
    return 0;
}
