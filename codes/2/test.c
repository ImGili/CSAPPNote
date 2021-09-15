/*
 * @Author: ImGili
 * @Description: 
 */

#include<stdio.h>

int main()
{
    float output1 = (3.14 + 1e20) - 1e20;
    float output2 = 3.14 + (1e20 - 1e20);
    printf("ouput1=%f\n", output1);
    printf("ouput1=%f\n", output2);
}