#include <stdio.h>

int main(void) {
    int data, result;

    // Q1
    data = 5;
    result = 0;
    result = data % 2;
    printf("Q1 => result: %d, data: %d\n", result, data);

    // Q2
    data = 5;
    result = 0;
    result = data < 5;
    printf("Q2 => result: %d, data: %d\n", result, data);

    // Q3
    data = 5;
    result = 0;
    result = data < 4 + 3;
    printf("Q3 => result: %d, data: %d\n", result, data);

    // Q4
    data = 5;
    result = 0;
    result = data++ + 2;
    printf("Q4 => result: %d, data: %d\n", result, data);

    // Q5
    data = 6;
    result = 0;
    result = data == 5;
    printf("Q5 => result: %d, data: %d\n", result, data);

    // Q6
    data = 6;
    result = 0;
    result = data != 5 && (data = 0);
    printf("Q6 => result: %d, data: %d\n", result, data);

    // Q7
    data = 0;
    result = 0;
    result = --result && (data = 0);
    printf("Q7 => result: %d, data: %d\n", result, data);

    // Q8
    data = 0;
    result = 0;
    result = result-- && (data = 0);
    printf("Q8 => result: %d, data: %d\n", result, data);

    // Q9
    data = 0;
    result = 0;
    result = result-- || (data = 0);
    printf("Q9 => result: %d, data: %d\n", result, data);

    return 0;
}