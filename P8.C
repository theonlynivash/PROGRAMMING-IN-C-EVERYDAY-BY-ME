#include <stdio.h>

int main() {
    int marks;

    // Ask user to enter marks
    printf("Enter your marks (0 - 100): ");
    scanf("%d", &marks);

    // Check for valid input
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    }
    // Grade conditions
    else if (marks < 35) {
        printf("Grade: Fail\n");
    }
    else if (marks >= 35 && marks <= 50) {
        printf("Grade: C\n");
    }
    else if (marks >= 51 && marks <= 65) {
        printf("Grade: B\n");
    }
    else if (marks >= 66 && marks <= 80) {
        printf("Grade: A\n");
    }
    else if (marks >= 81 && marks <= 90) {
        printf("Grade: A+\n");
    }
    else if (marks >= 91 && marks <= 100) {
        printf("Grade: O\n"); // 'O' for Outstanding
    }

    return 0;
}
