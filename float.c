#include <float.h>
#include<limits.h>
#include<stdio.h>

int main(void)
{
    printf("double型の最大値:%g\n",DBL_MAX);
    printf("double型の最小値:%g\n",DBL_MIN);
    printf("double型の精度:%d\n",DBL_DIG);
    printf("int型の最大値:%d\n",INT_MAX);
    printf("int型の最小値:%d\n",INT_MIN);
    printf("short型の最大値:%g\n",SHRT_MAX);
    printf("short型の最小値:%g\n",SHRT_MIN);
    printf("short型の符号なし最大値:%g\n",USHRT_MAX);
    

    return 0;
}