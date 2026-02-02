#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Add student
// View all student_database.txt
// Search by ID
// Update student details
// Delete a student record

struct student
{
    int id;
    char name[30];
    float marks;
};

FILE *ptr;

void addstudent();
void addstudent()
{
    struct student s;
    ptr = fopen("student_database.txt", "a");

    printf("enter student's id: ");
    scanf("%d", &s.id);
    printf("enter student's name: ");
    scanf("%s", &s.name);
    printf("enter student's marks: ");
    scanf("%f", &s.marks);

    fprintf(ptr, "\n%d %s %.2f", s.id, s.name, s.marks);
    fclose(ptr);

    printf("Student's data added successfully\n");
}

void showstudent();
void showstudent()
{
    struct student s;
    ptr = fopen("student_database.txt", "r");

    if (ptr == NULL)
    {
        printf("No records found.\n");
        return;
    }

    printf("\nID\tName\t\tMarks\n");
    while (fscanf(ptr, "%d %s %f", &s.id, s.name, &s.marks) == 3)
    {
        printf("%d\t%s\t\t%.2f\n", s.id, s.name, s.marks);
    }
    fclose(ptr);
}

void searchstudent();
void searchstudent()
{
    struct student s;
    int id, found = 0;

    printf("Enter ID to search: ");
    scanf("%d", &id);

    ptr = fopen("student_database.txt", "r");

    while (fscanf(ptr, "%d %s %f", &s.id, s.name, &s.marks) == 3)
    {
        if (s.id == id)
        {
            printf("ID: %d\nName: %s\nMarks: %.2f\n", s.id, s.name, s.marks);
            found = 1;
            break;
        }
    }
    fclose(ptr);

    if (!found)
        printf("Student not found!\n");
};

void updatestudent();
void updatestudent()
{

    struct student s;
    int id, found = 0;

    ptr = fopen("student_database.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (ptr == NULL || temp == NULL)
    {
        printf("File not found.\n");
        return;
    }

    printf("Enter ID to update: ");
    scanf("%d", &id);

    while (fscanf(ptr, "%d %s %f", &s.id, s.name, &s.marks) == 3)
    {
        if (s.id == id)
        {
            printf("Enter new name: ");
            scanf(" %s", s.name);
            printf("Enter new marks: ");
            scanf("%f", &s.marks);

            found = 1;
        }
        fprintf(temp, "%d %s %.2f \n", s.id, s.name, s.marks);
    }
    fclose(ptr);
    fclose(temp);

    remove("student_database.txt");
    rename("temp.txt", "student_database.txt");

    if (found)
        printf("Student updated successfully!\n");
    else
        printf("Student not found!\n");
}

void deletestudent();
void deletestudent()
{

    struct student s;
    int id, found = 0;

    FILE *temp = fopen("temp.txt", "w");
    ptr = fopen("student_database.txt", "r");

    printf("Enter ID to delete: ");
    scanf("%d", &id);

    while (fscanf(ptr, "%d %s %f", &s.id, s.name, &s.marks) == 3)
    {
        if (s.id != id)
        {
            fprintf(temp, "%d %s %.2f\n", s.id, s.name, s.marks);
        }
        else
        {
            found = 1;
        }
    }

    fclose(ptr);
    fclose(temp);

    remove("student_database.txt");
    rename("temp.txt", "student_database.txt");

    if (found)
        printf("Student deleted successfully!\n");
    else
        printf("Student not found!\n");
};

int main()
{

    int end, choice;

    do
    {

        printf("Enter 1 for add student's details.\n");
        printf("Enter 2 for view student's details.\n");
        printf("Enter 3 for search student's details.\n");
        printf("Enter 4 for update student's details.\n");
        printf("Enter 5 for delete student's details.\n");
        printf("Enter 6 for exit the program.\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addstudent();
            break;

        case 2:
            showstudent();
            break;

        case 3:
            searchstudent();
            break;

        case 4:
            updatestudent();
            break;

        case 5:
            deletestudent();
            break;

        case 6:
            printf("you are exiting the program.\n");
            break;

        default:
            printf("Invalid choice.\n");
            break;
        }

        printf("Do you want to run more tasks? Enter y for Yes and n for No: \n");
        scanf(" %c", &end);

        if (end == 'n' || end == 'N')

            break;

    } while (end != 'n' || end != 'N');

    printf("Program ended by user.\n");

    return 0;
}