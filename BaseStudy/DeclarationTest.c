/**
 * VSCODE
 * C99부터 변수 선언을 아무 곳에나 해도 에러가 나지 않도록 바뀌었다.
 * 옛날 C언어는 스코프가 개방될 때 선언부, 정의가 나누어져 있었음에 주의(C95까지는 나누어져 있었다.).
 * */

#include <stdio.h>

int main(void)
{
    int a = 10;
    printf("%d\n",a);
    int b = 20;
    printf("%d",b);
};