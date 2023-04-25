#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
struct Book inputBookDetails() {
    struct Book book;

    printf("Enter book title: ");
    fgets(book.title, 50, stdin);

    printf("Enter book author: ");
    fgets(book.author, 50, stdin);

    printf("Enter book subject: ");
    fgets(book.subject, 100, stdin);

    printf("Enter book ID: ");
    scanf("%d", &book.book_id);
    getchar();
	return book;
}
int main() {
    int num_books;
	printf("Enter the number of books: ");
    scanf("%d", &num_books);
    getchar();
    struct Book books[num_books];
    for (int i = 0; i < num_books; i++) 
        printf("\nEnter details for book %d:\n", i + 1);
        books[i] = inputBook Details();
		printf("\nBook details:\n");
    for (int i = 0; i < num_books; i++) 
        printf("\nBook %d:", i + 1);
        printf("\nTitle: %s", books[i].title);
        printf("Author: %s", books[i].author);
        printf("Subject: %s", books[i].subject);
        printf("ID: %d", books[i].book_id);
		return 0;
}
