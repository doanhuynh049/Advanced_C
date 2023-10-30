#include <math.h>
#include "ConvertingBinarytoDecimal.h"
int convertingBinaryDecimal(int binary_number){
    int decimal, temp;
    int i = 0;
    while (binary_number > 0)
    {
        temp = binary_number % 10;
        binary_number /= 10;
        decimal += temp*pow(2, i++);
    }
    return decimal;
}