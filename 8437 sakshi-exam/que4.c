#include <stdio.h>
#define pi 3.14
int main()
{
    float r, formula;

    printf("enter the r:- ");
    scanf("%.2f", &r);

    formula = (4 / 3) * 3.14 * (r * r * r);

    printf("the radius of formula is:- %.2f \n", formula);
}