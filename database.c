#include <stdio.h>

struct Student {
    char name[50];
    float subject1;
    float subject2;
    float subject3;
    char grade;
};

int main() {
    struct Student students[5];

    // Example data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Subject 1: ");
        scanf("%f", &students[i].subject1);
        printf("Subject 2: ");
        scanf("%f", &students[i].subject2);
        printf("Subject 3: ");
        scanf("%f", &students[i].subject3);
        printf("Grade: ");
        scanf(" %c", &students[i].grade);
    }

    // Display the student data
    printf("\nStudent Records:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Subject 1: %.2f, Subject 2: %.2f, Subject 3: %.2f, Grade: %c\n",
               students[i].name, students[i].subject1, students[i].subject2, students[i].subject3, students[i].grade);
    }

    return 0;
}
