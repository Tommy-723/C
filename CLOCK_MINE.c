#include <stdio.h>
#include <time.h>
#include <windows.h>
int main()
{
    time_t RAW = 0;
    struct tm *TIME = NULL;
    printf("CLOCK\n");
    while (1)
    {
        time(&RAW);
        TIME = localtime(&RAW);
        printf("\r%02d:%02d:%02d DATE--->%02d/%02d/%02d", TIME->tm_hour, TIME->tm_min, TIME->tm_sec, TIME->tm_mday, TIME->tm_mon + 1, TIME->tm_year - 100);
        Sleep(1000);
    }
    return 0;
}
