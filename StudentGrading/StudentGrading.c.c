/* Task 2: Student Grading with Subject Names
   Language: C 
*/
#include <stdio.h>

int main() {
    float marks[5];
    // Array of strings to store subject names
    char *subjects[] = {"Kiswahili", "English", "Mathematics", "Science", "Social Studies"};
    float sum = 0, average;
    int i; // Declared outside the loop to avoid C99 errors

    printf("--- Meru National Polytechnic Grading System ---\n");
    
    for(i = 0; i < 5; i++) {
        // Now it displays the actual name of the subject
        printf("Enter marks for %s: ", subjects[i]);
        
        // Error handling for non-numeric input
        if (scanf("%f", &marks[i]) != 1) {
            printf("\nERROR: Invalid input. Please enter a number.\n");
            return 1; 
        }
        sum += marks[i];
    }

    average = sum / 5;
    printf("\nTotal Marks: %.2f", sum);
    printf("\nAverage Marks: %.2f", average);

    // Grading logic based on the table
    printf("\nGrade: ");
    if (average >= 80 && average <= 100) {
        printf("A (Remarks: Excellent)");
    } else if (average >= 60 && average < 80) {
        printf("B (Remarks: Good)");
    } else if (average >= 40 && average < 60) {
        printf("C (Remarks: Pass)");
    } else if (average >= 0 && average < 40) {
        printf("FAIL");
    } else {
        printf("Invalid grade");
    }

    printf("\n-----------------------------------------------\n");
    return 0;
}