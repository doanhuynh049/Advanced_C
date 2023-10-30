#include <stdio.h>
// Creating an alias for an existing type
typedef int* i_pointer;

// Creating an alias for a structure
typedef struct
{
    int x;
    int y;
} Point;

// Creating an alias for a function pointer type
typedef int (*ArithmeticFunc)(int, int);
int add(int x, int y ){
    return x+ y ;
}
int main()
{
    i_pointer a;  // same as int *a
    int b = 10;
    a = &b;
    i_pointer* c;  // same as int **b;
    c = &a;
    printf("%d\n", *a);
    printf("%d\n", **c);

    Point p;
    p.x = 5;
    p.y = 10;
    printf("Coordinates: (%d) (%d)\n", p.x, p.y);

    ArithmeticFunc func =add ;
    int result = func(2, 3);
    printf("Result of func: %d\n", result);
    return 0;
}