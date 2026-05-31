#include "LibrarySystem.h"

void clearScreen()
{
    system("cls");
}

void pauseScreen()
{
    system("pause");
}

int main()
{

    LibraryManager library;

    int choice;

    do
    {
        cout << "\n===== Library Management System =====\n";

        cout << "1. Add Book First\n";
        cout << "2. Add Book End\n";
        cout << "3. Display Books\n";
        cout << "4. Search Book\n";
        cout << "5. Delete Book\n";
        cout << "6. Borrow Book\n";
        cout << "7. Display Last Borrow\n";
        cout << "8. Remove Last Borrow\n";
        cout << "9. Show Borrow History\n";
        cout << "10. Add Request\n";
        cout << "11. Process Request\n";
        cout << "12. Show Requests\n";
        cout << "0. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            clearScreen();
            library.addBookFirst();
            pauseScreen();
            clearScreen();
            break;

        case 2:
            clearScreen();      
            library.addBookEnd();
            pauseScreen();
            clearScreen();
            break;

        case 3:
            clearScreen();
            library.displayBooks();
            pauseScreen();
            clearScreen();
            break;

        case 4:
            clearScreen();
            library.searchBook();
            pauseScreen();
            clearScreen();
            break;

        case 5:
            clearScreen();
            library.deleteBook();
            pauseScreen();  
            clearScreen();
            break;

        case 6:
            clearScreen();
            library.borrowBook();
            pauseScreen();
            clearScreen();
            break;
        
        case 7:
            clearScreen();
            library.displayLastBorrow();
            pauseScreen();
            clearScreen();
            break;
        
        case 8:
            clearScreen();
            library.removeLastBorrow();
            pauseScreen();
            clearScreen();
            break;

        case 9:
            clearScreen();
            library.showBorrowHistory();
            pauseScreen();
            clearScreen();
            break;

        case 10:
            clearScreen();
            library.addRequest();
            pauseScreen();
            clearScreen();
            break;

        case 11:
            clearScreen();
            library.processRequest();
            pauseScreen();
            clearScreen();
            break;

        case 12:
            clearScreen();
            library.showRequests();
            pauseScreen();
            clearScreen();
            break;

        case 0:
            cout << "Good Bye\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 0);

    return 0;
}