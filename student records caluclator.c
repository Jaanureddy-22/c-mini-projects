#include <stdio.h>

struct student {
    int rollnum;
    char name[30];
    int sub1_marks, sub2_marks, sub3_marks;
    int total;
    float average;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student std[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &std[i].rollnum);

        printf("Enter student name: ");
        scanf("%s", std[i].name);

        printf("Enter marks in three subjects: ");
        scanf("%d%d%d", &std[i].sub1_marks, &std[i].sub2_marks, &std[i].sub3_marks);

        std[i].total = std[i].sub1_marks + std[i].sub2_marks + std[i].sub3_marks;
        std[i].average = std[i].total / 3.0;

        printf("Grade: ");
        if (std[i].average >= 90) {
            printf("A-grade\n");
        } else if (std[i].average >= 80) {
            printf("B-grade\n");
        } else if (std[i].average >= 70) {
            printf("C-grade\n");
        } else if (std[i].average >= 60) {
            printf("D-grade\n");
        } else if (std[i].average >= 50) {
            printf("E-grade\n");
        } else {
            printf("Fail\n");
        }
    }

    printf("\n------------- Student Details -------------\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", std[i].rollnum);
        printf("Name: %s\n", std[i].name);
        printf("Total Marks: %d\n", std[i].total);
        printf("Average: %.2f\n", std[i].average);
    }

    return 0;
}
