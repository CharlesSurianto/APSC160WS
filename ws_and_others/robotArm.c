/*
 * Author         : Charles Surianto
 * Purpose        : Calculate the position of point C from
 *                  length of AB, length of BC, angle of AB,
 *                  and angle of BC, given by the user
 * 
 *                  y
 *                  |
 *                  |  B _______ C
 *                  |   /
 *                  |  /
 *                  | /
 *                  +--------------x
 *                 A
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    double // variables declaration
        length_ab,
        length_bc,
        theta1,
        theta2,
        c_x,
        c_y;

    printf("length of AB (m) = ");   // prompt length of AB
    scanf("%lf", &length_ab);        // input length of AB
    printf("\nlength of BC (m) = "); // prompt length of BC
    scanf("%lf", &length_bc);        // input length of BC

    printf("\nangle of AB (rad) = "); // prompt angle of AB
    scanf("%lf", &theta1);            // input angle of AB
    printf("\nangle of BC (rad) = "); // prompt angle of BC
    scanf("%lf", &theta2);            // input angle of BC

    c_x = length_ab * cos(theta1) + length_bc * cos(theta2); // compute x
    c_y = length_ab * sin(theta1) + length_bc * sin(theta2); // compute y

    printf("\nC coordinate = (%.6f, %.6f)\n", c_x, c_y); // output C coordinate

    return 0;
}