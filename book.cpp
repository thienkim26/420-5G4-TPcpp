#include <sstream>
#include <iostream>
#include <algorithm>

#include "book.h"

using namespace std;

// Default constructor
Book::Book() : title(""), author(""), isbn(""), isAvailable(true), borrowerId("") {}

// Parameterized constructor
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn) {}

// Getters
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }
string Book::getBorrowerId() const { return borrowerId; }

// Setters
void Book::setTitle(const string& title) { this->title = title;}
void Book::setAuthor(const string& author) { this->author = author;}
void Book::setISBN(const string& isbn) { this->isbn = isbn;}
void Book::setAvailability(bool available) { this->isAvailable = available;}
void Book::setBorrowerId(const string& id) { this->borrowerId = id;}

// Checkout a book
void Book::checkOut(const string& borrowerId) {
    if(isAvailable) {
        isAvailable = false;
        this->borrowerId = borrowerId;
    }
}

// Return a book
void Book::returnBook() {
    isAvailable = true;
    borrowerId = "";
}