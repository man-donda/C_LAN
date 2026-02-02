#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A library system where:
// Books can be added, issued, returned
// Track issued books
// Search by book name or ID
// Store all data in files

typedef struct
{
    int id;
    char name[50];
    char author[50];
    int quantity;
} Book;

void addBook();
void displayBooks();
void issueBook();
void returnBook();
void searchBook();

void addBook()
{
    FILE *ptr = fopen("books.txt", "ab");
    Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    getchar();

    printf("Enter Book Name: ");
    fgets(b.name, 50, stdin);
    b.name[strcspn(b.name, "\n")] = 0;

    printf("Enter Author Name: ");
    fgets(b.author, 50, stdin);
    b.author[strcspn(b.author, "\n")] = 0;

    printf("Enter Quantity: ");
    scanf("%d", &b.quantity);

    fwrite(&b, sizeof(Book), 1, ptr);
    fclose(ptr);

    printf("Book added successfully!\n");
}

void displayBooks()
{
    FILE *ptr = fopen("books.txt", "rb");
    Book b;

    if (ptr == NULL)
    {
        printf("No books found!\n");
        return;
    }

    printf("\n--- Book List ---\n");
    while (fread(&b, sizeof(Book), 1, ptr))
    {
        printf("ID: %d\nName: %s\nAuthor: %s\nQuantity: %d\n\n",
               b.id, b.name, b.author, b.quantity);
    }
    fclose(ptr);
}

void issueBook()
{
    FILE *ptr = fopen("books.txt", "rb+");
    Book b;
    int id, found = 0;

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(Book), 1, ptr))
    {
        if (b.id == id)
        {
            found = 1;
            if (b.quantity > 0)
            {
                b.quantity--;
                fseek(ptr, -sizeof(Book), SEEK_CUR);
                fwrite(&b, sizeof(Book), 1, ptr);
                printf("Book issued successfully!\n");
            }
            else
            {
                printf("Book not available!\n");
            }
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");

    fclose(ptr);
}

void returnBook()
{
    FILE *ptr = fopen("books.txt", "rb+");
    Book b;
    int id, found = 0;

    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(Book), 1, ptr))
    {
        if (b.id == id)
        {
            found = 1;
            b.quantity++;
            fseek(ptr, -sizeof(Book), SEEK_CUR);
            fwrite(&b, sizeof(Book), 1, ptr);
            printf("Book returned successfully!\n");
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");

    fclose(ptr);
}

void searchBook()
{
    FILE *ptr = fopen("books.txt", "rb");
    Book b;
    int id, found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    while (fread(&b, sizeof(Book), 1, ptr))
    {
        if (b.id == id)
        {
            printf("\nBook Found!\n");
            printf("Name: %s\nAuthor: %s\nQuantity: %d\n",
                   b.name, b.author, b.quantity);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");

    fclose(ptr);
}

int main()
{
    int choice;

    while (1)
    {
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Search Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            issueBook();
            break;
        case 4:
            returnBook();
            break;
        case 5:
            searchBook();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}