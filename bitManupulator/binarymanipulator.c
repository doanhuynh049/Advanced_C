#include <math.h>
#include <stdio.h>
int convertingBinarytoDecimal(const int binary)
{
    int temp = binary;
    int decimal = 0;
    ;
    int i = 0;
    int tmp_binary;
    while (temp > 0)
    {
        tmp_binary = temp % 10;
        decimal += tmp_binary * pow(2, i++);
        temp /= 10;
        printf("%d %d %d\n", temp, i, decimal);
    }
    return decimal;
}
int main()
{
    int decimal = convertingBinarytoDecimal(1010);
    printf("%d", decimal);
}