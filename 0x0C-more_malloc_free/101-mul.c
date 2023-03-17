#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void print_usage();
void print_error();
int is_valid_number(char *num);

int main(int argc, char **argv) {
    // Check number of arguments
    if (argc != 3) {
        print_error();
        return 98;
    }

    // Check if arguments are valid numbers
    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        print_error();
        return 98;
    }

    // Convert input to numbers
    char *num1_str = argv[1];
    char *num2_str = argv[2];
    int num1_len = strlen(num1_str);
    int num2_len = strlen(num2_str);
    int *num1 = calloc(num1_len, sizeof(int));
    int *num2 = calloc(num2_len, sizeof(int));
    for (int i = 0; i < num1_len; i++) {
        num1[i] = num1_str[num1_len-i-1] - '0';
    }
    for (int i = 0; i < num2_len; i++) {
        num2[i] = num2_str[num2_len-i-1] - '0';
    }

    // Multiply numbers
    int max_len = num1_len + num2_len;
    int *result = calloc(max_len, sizeof(int));
    for (int i = 0; i < num1_len; i++) {
        for (int j = 0; j < num2_len; j++) {
            result[i+j] += num1[i] * num2[j];
        }
    }
    for (int i = 0; i < max_len-1; i++) {
        result[i+1] += result[i] / 10;
        result[i] %= 10;
    }

    // Print result
    int result_len = max_len;
    while (result_len > 1 && result[result_len-1] == 0) {
        result_len--;
    }
    for (int i = result_len-1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");

    // Free memory
    free(num1);
    free(num2);
    free(result);

    return 0;
}

void print_usage() {
    printf("Usage: mul num1 num2\n");
    printf("num1 and num2 will be passed in base 10\n");
    printf("Print the result, followed by a new line\n");
}

void print_error() {
    printf("Error\n");
}

int is_valid_number(char *num) {
    int len = strlen(num);
    for (int i = 0; i < len; i++) {
        if (!isdigit(num[i])) {
            return 0;
        }
    }
    return 1;
}

