#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &s[count].id);

            printf("Enter Name: ");
            scanf("%s", s[count].name);

            printf("Enter Marks: ");
            scanf("%f", &s[count].marks);

            count++;
        }

        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                printf("\nID: %d", s[i].id);
                printf("\nName: %s", s[i].name);
                printf("\nMarks: %.2f\n", s[i].marks);
            }
        }

        else if (choice == 3) {
            break;
        }
    }

    return 0;
}

