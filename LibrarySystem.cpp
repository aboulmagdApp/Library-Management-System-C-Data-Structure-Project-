#include "LibrarySystem.h"
#include <string>


// ================= LINKED LIST =================

LibraryLinkedList::LibraryLinkedList()
{
    head = NULL;
}

bool LibraryLinkedList::isEmpty()
{
    return head == NULL;
}

void LibraryLinkedList::addFirst(Book book)
{
    Node* p = new Node();

    p->data = book;
    p->next = head;

    head = p;
}

void LibraryLinkedList::append(Book book)
{
    Node* p = new Node();

    p->data = book;
    p->next = NULL;

    if (isEmpty())
    {
        head = p;
    }
    else
    {
        Node* cursor = head;

        while (cursor->next != NULL)
        {
            cursor = cursor->next;
        }

        cursor->next = p;
    }
}

void LibraryLinkedList::displayBooks()
{
    if (isEmpty())
    {
        cout << "No Books Found\n";
        return;
    }

    Node* cursor = head;

    while (cursor != NULL)
    {
        cout << "ID: " << cursor->data.id << endl;
        cout << "Title: " << cursor->data.title << endl;
        cout << "Author: " << cursor->data.author << endl;
        cout << "-------------------\n";

        cursor = cursor->next;
    }
}

void LibraryLinkedList::searchBook(int id)
{
    Node* cursor = head;

    while (cursor != NULL)
    {
        if (cursor->data.id == id)
        {
            cout << "Book Found\n";
            cout << cursor->data.title << endl;
            return;
        }

        cursor = cursor->next;
    }

    cout << "Book Not Found\n";
}

void LibraryLinkedList::deleteBook(int id)
{
    if (isEmpty())
    {
        cout << "List Empty\n";
        return;
    }

    Node* current = head;
    Node* previous = NULL;

    while (current != NULL && current->data.id != id)
    {
        previous = current;
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Book Not Found\n";
        return;
    }

    if (previous == NULL)
    {
        head = head->next;
    }
    else
    {
        previous->next = current->next;
    }

    delete current;

    cout << "Book Deleted\n";
}



// ================= STACK =================

BorrowStack::BorrowStack()
{
    top = -1;
}

bool BorrowStack::isEmpty()
{
    return top == -1;
}

bool BorrowStack::isFull()
{
    return top == 99;
}

void BorrowStack::push(string bookTitle)
{
    if (isFull())
    {
        cout << "Stack Full\n";
        return;
    }

    top++;

    stack[top] = bookTitle;
}

void BorrowStack::pop()
{
    if (isEmpty())
    {
        cout << "Stack Empty\n";
        return;
    }

    cout << "Removed: " << stack[top] << endl;

    top--;
}

void BorrowStack::display()
{
    if (isEmpty())
    {
        cout << "No Borrow History\n";
        return;
    }

    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}



// ================= QUEUE =================

RequestQueue::RequestQueue()
{
    front = 0;
    rear = -1;
}

bool RequestQueue::isEmpty()
{
    return rear < front;
}

bool RequestQueue::isFull()
{
    return rear == 99;
}

void RequestQueue::enqueue(string name)
{
    if (isFull())
    {
        cout << "Queue Full\n";
        return;
    }

    rear++;

    queue[rear] = name;
}

void RequestQueue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue Empty\n";
        return;
    }

    cout << "Processed: " << queue[front] << endl;

    front++;
}

void RequestQueue::display()
{
    if (isEmpty())
    {
        cout << "No Requests\n";
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << endl;
    }
}



// ================= LIBRARY MANAGER =================

void LibraryManager::addBookFirst()
{
    Book b;

    cout << "Enter ID: ";
    cin >> b.id;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, b.title);

    cout << "Enter Author: ";
    getline(cin, b.author);

    books.addFirst(b);
}

void LibraryManager::addBookEnd()
{
    Book b;

    cout << "Enter ID: ";
    cin >> b.id;

    cin.ignore();

    cout << "Enter Title: ";
    getline(cin, b.title);

    cout << "Enter Author: ";
    getline(cin, b.author);

    books.append(b);
}

void LibraryManager::displayBooks()
{
    books.displayBooks();
}

void LibraryManager::searchBook()
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    books.searchBook(id);
}

void LibraryManager::deleteBook()
{
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    books.deleteBook(id);
}

void LibraryManager::borrowBook()
{
    string title;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title);

    borrowHistory.push(title);
}

void LibraryManager::showBorrowHistory()
{
    borrowHistory.display();
}

void LibraryManager::addRequest()
{
    string name;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    requests.enqueue(name);
}

void LibraryManager::processRequest()
{
    requests.dequeue();
}

void LibraryManager::showRequests()
{
    requests.display();
}