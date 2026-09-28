#include <iostream>
using namespace std;
class library {
private:
    string n;
    int ID;
    string name[3] = { "Ahmed", "Haseeb", "Hamza" };
    int id[3] = { 16046, 17009, 17419 };

public:
    int count = 0;
    string bookname[100], bookauthour[100];
    int bookid[100];

   void login() {
    string names[3] = {"Ahmed", "Haseeb", "Hamza"};
    int ids[3] = {16046, 17009, 17419};
    string enteredName;
    int enteredID;
    cout << "Please enter your name: ";
    cin >> enteredName;
    cout << "Please enter your ID: ";
    cin >> enteredID;
    bool found = false;
    for (int i = 0; i < 3; i++) {
        if (names[i] == enteredName && ids[i] == enteredID) {
            found = true;
            cout << "Login Successful! Welcome, " << names[i] << "!" << endl;
            break;
        }
    }
    if (!found) {
        cout << "Sorry, your name or ID is incorrect." << endl;
        cout << "Do you want to try again? (y/n): ";
        char choice;
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            login();
        } else {
            cout << "Goodbye!" << endl;
        }
    }
}

    void menu() {
        int c;
         {
            cout << "================= Menu ===============" << endl;
            cout << "1. Add Book" << endl;
            cout << "2. Show All Books" << endl;
            cout << "3. Search Book by ID" << endl;
            cout << "4. Sort Books by ID" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter choice: ";
            cin >> c;

            switch (c) {
            case 1:
                addbook();
                break;
            case 2:
                showbook();
                break;
            case 3:
                searchbook();
                break;
            case 4:
                sortbyid();
                break;
            case 5:
                cout << "=========== Good Bye !! ===========" << endl;
                return;
            default:
                cout << "Invalid choice. Try again." << endl;
            }
        }
    }

    void addbook() {
        cout << "You can add up to 100 books. Current count: " << count << endl;
        if (count >= 100) {
            cout << "The library is full. No more books can be added!" << endl;
        } else {
            cout << "Enter Book Name: ";
            cin >> bookname[count];
            cout << "Enter Book Author: ";
            cin >> bookauthour[count];
            cout << "Enter Book ID: ";
            cin >> bookid[count];
            count++;
            cout << "The book was added successfully!" << endl;
            menu();
        }
    }

    void showbook() {
        if (count == 0) {
            cout << "No books in the library!" << endl;
        } else {
            for (int i = 0; i < count; i++) {
                cout << "\nBook " << i + 1 << ":\n";
                cout << "Name: " << bookname[i] << endl;
                cout << "Author: " << bookauthour[i] << endl;
                cout << "ID: " << bookid[i] << endl;
            }
        }
        menu();
    }

void searchbook() {
    if (count == 0) {
        cout << "No books in the library to search!" << endl;
        menu();
        return;
    }

    int searchid;
    cout << "Enter The book ID to search: ";
    cin >> searchid;
    
    bool found = false;
    for (int i = 0; i < count; i++) {  // Only search up to count, not 100
        if (searchid == bookid[i]) {
            cout << "Book found:\n";
            cout << "Book Name: " << bookname[i] << endl;
            cout << "Book Author: " << bookauthour[i] << endl;
            cout << "Book ID: " << bookid[i] << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "The ID you entered is wrong. Try again!" << endl;
        char choice;
        cout << "Do you want to try again? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            searchbook();
            return;
        }
    }
    menu();
}

 	void sortbyid(){
	
	for (int i = 0; i < count - 1; i++) {
    	for (int j = i + 1; j < count ; j++) {
        	if (bookid[i] > bookid[j]) {
	            // Swap bookid
	            int temp = bookid[i];
	            bookid[i] = bookid[j];
	            bookid[j] = temp;
	
	            // Swap bookname
	            string tempName = bookname[i];
	            bookname[i] = bookname[j];
	            bookname[j] = tempName;
	
	            // Swap bookauthor
	            string tempAuthor = bookauthour[i];
	            bookauthour[i] = bookauthour[j];
	            bookauthour[j] = tempAuthor;
        }
    }
            cout << "Books sorted by ID successfully!" << endl;
}
 	menu();
	}
};

int main() {
    library l;
    l.login();
    l.menu();
    return 0;
}

