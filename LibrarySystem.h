#ifndef LIBRARYSYSTEM_H
#define LIBRARYSYSTEM_H

#include <iostream>
using namespace std;

class Book
{
public:
    int id;
    string title;
    string author;
};

class Node
{
public:
    Book data;
    Node* next;
};

class LibraryLinkedList
{
private:
    Node* head;

public:
    LibraryLinkedList();

    bool isEmpty();

    void addFirst(Book book);

    void append(Book book);

    void displayBooks();

    void searchBook(int id);

    void deleteBook(int id);
};

class BorrowStack
{
private:
    string stack[100];
    int top;

public:
    BorrowStack();

    bool isEmpty();

    bool isFull();

    void push(string bookTitle);

    void pop();

    void display();
};

class RequestQueue
{
private:
    string queue[100];
    int front;
    int rear;

public:
    RequestQueue();

    bool isEmpty();

    bool isFull();

    void enqueue(string name);

    void dequeue();

    void display();
};

class LibraryManager
{
private:
    LibraryLinkedList books;
    BorrowStack borrowHistory;
    RequestQueue requests;

public:
    void addBookFirst();

    void addBookEnd();

    void displayBooks();

    void searchBook();

    void deleteBook();

    void borrowBook();

    void showBorrowHistory();

    void addRequest();

    void processRequest();

    void showRequests();
};

#endif