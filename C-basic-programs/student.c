#include <stdio.h>

struct student {
    char name[30];
    int rollno;
    char branch[30];
    int marks;
};

int main() {
    struct student studentlist[10];
    int i, max=0;

    for (i=0; i<3; i++) {
        printf("Enter student name: ");
        scanf("%s", studentlist[i].name);
        printf("Enter student rollno: ");
        scanf("%d", &studentlist[i].rollno);
        printf("Enter student branch: ");
        scanf("%s", studentlist[i].branch);
        printf("Enter student marks: ");
        scanf("%d", &studentlist[i].marks);

        if (studentlist[i].marks > max) {
            max = studentlist[i].marks;
        }
    }
    for (i=0; i<3; i++) {
        if (studentlist[i].marks == max) {
            printf("%s has topped with %d marks\n", studentlist[i].name, studentlist[i].marks);
        }
    }
    return 0;
}
