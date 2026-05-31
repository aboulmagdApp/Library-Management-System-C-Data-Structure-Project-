# Library Management System (C++ Data Structure Project)

## Project Description

This project is a simple Library Management System developed using C++.

The project demonstrates the use of:

- Linked List
- Stack
- Queue


---

# Features

## Linked List
- Add book at first
- Add book at end
- Search book
- Delete book
- Display all books

## Stack
- Store borrow history

## Queue
- Manage borrow requests

---

# Project Structure

```txt
LibrarySystem/
│
├── public/
│   └── demo.mp4
│
├── LibrarySystem.h
├── LibrarySystem.cpp
├── main.cpp
└── README.md
```

---

## Build and Run 
- build Run : g++ main.cpp LibrarySystem.cpp -o main 
- Run : ./main

---

## 👥 Tasks Distribution

| Student | Role | Files | Functions / Classes to Read & Practice |
|----------|------|-------|----------------------------------------|
| **Mohamed Aboulmagd** | **Team Leader + Architecture** | `LibrarySystem.h` + `LibrarySystem.cpp` + `main.cpp` | **Classes:** `Book`, `Node`, `LibraryLinkedList`, `BorrowStack`, `RequestQueue`, `LibraryManager` + `main()` |
| **Mahmoud Aboelnaga** | **Linked List Insert & Display** | `LibrarySystem.cpp` | `LibraryLinkedList::addFirst()`<br>`LibraryLinkedList::append()`<br>`LibraryLinkedList::displayBooks()` |
| **Nariman** | **Linked List Search & Delete** | `LibrarySystem.cpp` | `LibraryLinkedList::searchBook()`<br>`LibraryLinkedList::deleteBook()`<br>`LibraryLinkedList::isEmpty()` |
| **Ibrahim Ragab** | **Stack (Borrow History)** | `LibrarySystem.cpp` | `BorrowStack::push()`<br>`BorrowStack::pop()`<br>`BorrowStack::display()`<br>`BorrowStack::isEmpty()`<br>`BorrowStack::isFull()` |
| **Rawan** | **Queue (Borrow Requests)** | `LibrarySystem.cpp` | `RequestQueue::enqueue()`<br>`RequestQueue::dequeue()`<br>`RequestQueue::display()`<br>`RequestQueue::isEmpty()`<br>`RequestQueue::isFull()` |
| **Samer Wagdy** | **Integration + Main Menu + Testing** | `main.cpp` + `LibrarySystem.cpp` | `main()`<br>`clearScreen()`<br>`pauseScreen()`<br>`LibraryManager::addBookFirst()`<br>`LibraryManager::addBookEnd()`<br>`LibraryManager::deleteBook()`<br>`LibraryManager::searchBook()`<br>`LibraryManager::borrowBook()`<br>`LibraryManager::addRequest()`<br>`LibraryManager::processRequest()` |



---
# Project Demo

[![Demo](public/demo.gif)](public/demo.gif)