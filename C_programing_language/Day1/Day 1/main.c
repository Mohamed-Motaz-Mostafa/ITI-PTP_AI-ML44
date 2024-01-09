#include <stdio.h>
#include <stdlib.h>

int main()
{


       int input;  // ascii to char
    scanf("%d", &input);
    printf("%c", input);

    /*
    char input;   // char to ascii
    scanf("%c", &input);
    printf("%d", input);
    */

    /*
    int input;      // int to hex
    scanf("%d", &input);
    printf("%x", input);
    */



    /*
    // A program take 2 numbers and print sum and sub and multiplication.
    int input1;
    int input2;

    int sum;
    int sub;
    int mul;

    scanf("%d", &input1);
    scanf("%d", &input2);

    sum = input1 + input2;
    sub = input1 - input2;
    mul = input1 * input2;

    printf("sum=%d \t sub=%d \t mul=%d \n\n", sum, sub, mul);
    printf("%d + %d = %d \n", input1, input2, sum);
    printf("%d - %d = %d \n", input1, input2, sub);
    printf("%d * %d = %d \n", input1, input2, mul);

    */
    printf("Hello world!\n");
    return 0;
}
