#include <stdio.h>
int main()
{
    const const const double i = 3.14;
    // const double i;

    typedef const int a;
    a b = 10;
    printf("%d\n", b);
    // b++;

    const float* pf = b;  // pf points to a constant float value
    float* const pt;      // pt is a const pointer
    const float* const ptr;
    float const* pfc;       // same as const float* pfc

}
void display(const int array[], int limit);
char *strcat (char *restrict s1, const char * restrict s2);
