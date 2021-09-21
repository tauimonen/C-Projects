/*
A program that receives a 32-character string representing the number 
strings '0' and '1' as a command line parameter and tells you which 
32-bit IEEE 754 floating point number the bit string represented by 
the command line parameter corresponds to. 

Program prints as a output: value part, exponent, sign and the value 
of the floating point value on separate lines.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double valSum, finalSum;
    int i, exp;
    char sign;
    int expSum;
    sign = argv[1][0];

    /* a decimal number in the format 1.x */
    valSum = 1.0; 

    /* From left to right, the i-bit weight of the index is 1/2^i+1 */
    exp = 1; 

    /* A 32-bit floating point number has 8 exponential bits and a 
    correction term of 127. */
    expSum = -127;

    /* Calculating decimal part. 
    23 bit value part starts from index 9 */
    for (i = 9; i <= 31; ++i) {
        if (argv[1][i] == '1') {
            valSum += pow(0.5, exp); 
        }
        exp += 1;
    }
    printf("%.15f\n", valSum);

    /* Calculating the exponent */
    for (i = 1; i <= 8; ++i) {
        if (argv[1][i] == '1') {
            expSum += pow(2, (8 - i));
        } 
    }
    printf("%d\n", expSum);

    /* Printing the sign */
    if (sign == '1')
        printf("-\n");
    if (sign == '0')
        printf("+\n");

    finalSum = valSum * pow(2, expSum);
    if (sign == '1')
        printf("-");
    printf("%.15f\n", finalSum);

    return 0;
}