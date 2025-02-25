#include <stdio.h> 
#include <string.h>

#define NUM_STUDENTS 10
#define NUM_SUBJECTS 3
#define MAX_NAME_LENGTH 50

// Function to input student data
void inputStudentData(char names[NUM_STUDENTS][MAX_NAME_LENGTH], int marks[NUM_STUDENTS][NUM_SUBJECTS]) {
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter the name of Student %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin); // Read the name with spaces
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline character from name

        printf("Enter marks for %s:\n", names[i]);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
        getchar(); // To consume the newline character after the last scanf
    }
}

// Function to calculate total marks
int calculateTotalMarks(int marks[NUM_SUBJECTS]) {
    int total = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        total += marks[i];
    }
    return total;
}

// Function to grade the student based on total marks
char* gradeStudent(int totalMarks) {
    if (totalMarks >= 80) {
        return "A";
    } else if (totalMarks >= 60) {
        return "B";
    } else if (totalMarks >= 40) {
        return "C";
    } else {
        return "D";
    }
}

// Function to display student data and grades
void displayStudentData(char names[NUM_STUDENTS][MAX_NAME_LENGTH], int marks[NUM_STUDENTS][NUM_SUBJECTS]) {
    printf("\nStudent Report:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        int totalMarks = calculateTotalMarks(marks[i]);
        char* grade = gradeStudent(totalMarks);

        printf("\nStudent: %s\n", names[i]);
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("  Subject %d: %d\n", j + 1, marks[i][j]);
        }
        printf("Total Marks: %d\n", totalMarks);
        printf("Grade: %s\n", grade);
    }
}

int main() {
    char names[NUM_STUDENTS][MAX_NAME_LENGTH];  // Array to store student names
    int marks[NUM_STUDENTS][NUM_SUBJECTS];      // 2D array to store marks

    // Input student names and marks
    inputStudentData(names, marks);

    // Display student data and grades
    displayStudentData(names, marks);

    return 0;
}


