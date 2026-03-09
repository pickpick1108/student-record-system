#include <stdio.h>
#include <string.h>

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
        printf("\n----- Student Record System -----\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
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
            printf("Student added successfully!\n");
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("No records found.\n");
            } else {
                for (int i = 0; i < count; i++) {
                    printf("\nID: %d", s[i].id);
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                }
            }
        }

        else if (choice == 3) {
            int id, found = 0;
            printf("Enter ID to search: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (s[i].id == id) {
                    printf("\nStudent Found:\n");
                    printf("ID: %d\n", s[i].id);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Student not found.\n");
            }
        }

        else if (choice == 4) {
            int id, found = 0;
            printf("Enter ID to delete: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (s[i].id == id) {
                    for (int j = i; j < count - 1; j++) {
                        s[j] = s[j + 1];
                    }
                    count--;
                    found = 1;
                    printf("Student deleted successfully.\n");
                    break;
                }
            }

            if (!found) {
                printf("Student not found.\n");
            }
        }

        else if (choice == 5) {
            printf("Exiting program...\n");
            break;
        }

        else {
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
