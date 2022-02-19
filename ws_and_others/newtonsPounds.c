#include <stdio.h>

// constant
#define N_PER_LB 4.448

int main(void)
{
    double force_nt, force_lb; // variables declaration

    printf("enter force in Newtons (N) = "); // print the prompt
    scanf("%lf", &force_nt);                 // input force in N

    force_lb = force_nt / N_PER_LB; // compute force in lb

    printf("\nforce in pounds (lb) = %.3f\n", force_lb); // output force in lb

    return 0;
}