#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
    char title[100];
    char author[100];
    struct Book* next;
} Book;

Book* createBook(char* title, char* author) {
    Book* newBook = (Book*) malloc(sizeof(Book));
    strcpy(newBook->title, title);
    strcpy(newBook->author, author);
    newBook->next = NULL;
    return newBook;
}

void addBook(Book** head, char* title, char* author) {
    Book* newBook = createBook(title, author);
    if (*head == NULL) {
        *head = newBook;
    } else {
        Book* current = *head;
        while (current->next) {
            current = current->next;
        }
        current->next = newBook;
    }
}

void displayBooks(Book* head) {
    Book* current = head;
    while (current) {
        printf("Title: %s\n", current->title);
        printf("Author: %s\n\n", current->author);
        current = current->next;
    }
}

void freeList(Book* head) {
    Book* current = head;
    while (current) {
        Book* next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    Book* head = NULL;
    int choice;
    char title[100];
    char author[100];

    while (1) {
        printf("Book Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  

        switch (choice) {
            case 1:
                printf("Enter book title: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = 0;  
                printf("Enter book author: ");
                fgets(author, sizeof(author), stdin);
                author[strcspn(author, "\n")] = 0; 
                addBook(&head, title, author);
                break;
            case 2:
                displayBooks(head);
                break;
            case 3:
                freeList(head);
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
