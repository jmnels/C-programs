#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Eulers(double n);

int main()
{
    double n;

    printf("Enter a positive number: \n");
    scanf("%lf", &n);
    printf("\tEuler's number to %10.1lf steps is %lf\n", n, Eulers(n));

    return 0;
}

double Eulers(double n)
{

    return(pow((1 + (1 / n)), n));
}
