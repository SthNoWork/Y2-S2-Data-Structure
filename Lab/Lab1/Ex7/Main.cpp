/*
Write a C++ program to create a new data structure for storing info of book (book ID, book ISBN,
book  title,  published  year,  author  names  and  price  ($)).  Each  book  could  have  more  than  one
author. To do:
▪ Create an array that can store 5 books’ info.
▪ Create a function to display a book info based on ISBN. This function takes a parameter which
is an ISBN of a book.
void displayBookByISBN(Book books[], int size, string isbn){.... }
▪ Create a function to display information of all books.
void displayAllBooks(Book books[], int size) { ... }
*/

#include "../../utils/input.cpp"
#include <iostream>

using namespace std;

struct Book {
    int id;
    string isbn;
    string title;
    int publishedYear;
    string authors[5];
    int authorCount;
    double price;
};

void displayBook(Book book) {
    cout << "ID:" << book.id << endl;
    cout << "ISBN: " << book.isbn << endl;
    cout << "Title: " << book.title << endl;
    cout << "Published Year: " << book.publishedYear << endl;
    cout << "Price:$ " << book.price << endl;
    cout << "Authors: ";
    for (int i = 0; i < book.authorCount; i++) {
        cout << book.authors[i];
        if (i < book.authorCount - 1) cout << ", ";
    }
    cout << endl
         << endl;
}

void displayBookByISBN(Book books[], int size, string isbn) {
    for (int i = 0; i < size; i++) {
        if (books[i].isbn == isbn) {
            displayBook(books[i]);
            return;
        }
    }
    cout << "Book with ISBN " << isbn << " not found." << endl;
}

void displayAllBooks(Book books[], int size) {
    for (int i = 0; i < size; i++) {
        displayBook(books[i]);
    }
}

int main() {
    Book books[5] = {
        {1, "978-0-13-468599-1", "The C++ Programming Language", 2013, {"Bjarne Stroustrup"}, 1, 59.99},
        {2, "978-0-13-235088-4", "Clean Code", 2008, {"Robert C. Martin"}, 1, 35.99},
        {3, "978-0-20-163361-0", "The Pragmatic Programmer", 1999, {"Andrew Hunt", "David Thomas"}, 2, 49.99},
        {4, "978-0-59-651798-1", "JavaScript: The Good Parts", 2008, {"Douglas Crockford"}, 1, 29.99},
        {5, "978-0-13-110362-7", "The C Programming Language", 1988, {"Brian Kernighan", "Dennis Ritchie"}, 2, 39.99}};

    displayAllBooks(books, 5);

    cout << "\n--- Search by ISBN ---" << endl;
    string isbn = getString("Enter ISBN: ");
    displayBookByISBN(books, 5, isbn);

    return 0;
}