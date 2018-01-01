/**
 * VSCODE
 * */
#include <stdio.h>

int main(void)
{
    int inputValue, seconds, minutes, hours;

    scanf("%d", &inputValue);
    seconds = inputValue%60;
    inputValue /= 60;
    minutes = inputValue%60;
    inputValue /= 60;
    hours = inputValue%60;
    printf("%d시 %d분 %d초\n", hours, minutes, seconds);
};