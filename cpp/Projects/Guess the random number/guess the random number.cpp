#include <iostream>
#include <cstdlib>  // Includes system(), rand(), and srand()
#include <ctime>    // Includes time()
using namespace std;
int main();
game() {
    int attempts, choice;
    srand(time(0));  // Seed the random number generator
    int secretNumber = (rand() % 100) + 1;  // Generates random number between 1 and 100

    char input;
    cout<<"==========================================================================================================="<<endl;
	cout << "***************************** Welcome to Guess The Random Number! *****************************" << endl;
    cout<<"==========================================================================================================="<<endl<<endl;
	cout << "You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose !!" << endl;

    cout << "Enter the difficulty level:" << endl;
    cout << "1 for Easy Mode!" << endl;
    cout << "2 for Medium Mode !" << endl;
    cout << "3 for Hard Mode !" << endl;
    cout << "0 for ending the game!" << endl;
    cout << "Enter Your Desired Number: ";
    cin >> input;

    switch (input) {
        case '1':
            system("cls");
			cout<<"==========================================================================================================="<<endl;
			cout << "******************************** You have Selected Easy Mode *****************************" << endl << endl;
            cout << "******************************** You have 10 ATTEMPTS *****************************" << endl << endl;
            cout<<"==========================================================================================================="<<endl<<endl;
			attempts = 10;
            break;
        case '2':
            system("cls");
			cout<<"==========================================================================================================="<<endl;
			cout << "******************************** You have Selected Medium Mode *****************************" << endl << endl;
            cout << "******************************** You have 7 ATTEMPTS *****************************" << endl << endl;
            cout<<"==========================================================================================================="<<endl<<endl;
			attempts = 7;
            break;
        case '3':
            system("cls");
			cout<<"==========================================================================================================="<<endl;
			cout << "******************************** You have Selected Hard Mode *****************************" << endl << endl;
            cout << "******************************** You have 5 ATTEMPTS *****************************" << endl << endl;
            cout<<"==========================================================================================================="<<endl<<endl;
			attempts = 5;
            break;
        case '0':
            system("cls");
			cout<<"==========================================================================================================="<<endl;
			cout << "Thanks for playing! Goodbye!" << endl;
            cout<<"==========================================================================================================="<<endl<<endl;
			return 0;
        default:
            system("cls");
			cout<<"==========================================================================================================="<<endl;
			cout << "Invalid choice! Please  enter a valid option." << endl;
            cout<<"==========================================================================================================="<<endl<<endl;
			game();
		 break;
    }

    for (int i = 1; i <= attempts; i++) {
        cout << "Enter Your Number: ";
        cin >> choice;

        if (choice == secretNumber) 
		{
            cout << "********** You Won! Congratulations!!!! *********** " << choice << " was the correct answer!" << endl;
            cout << "*********** Press 'y' to Try Again ************";
		    cin>>input;
		        switch (input) 
				{
                    case 'y':
                        system("CLS");
                        game();
                    break;
                    default:
                        cout << "Wrong Alphabet !!! ";
                    break;
		        }
        } 
		else
		{
            cout << "Nope, " << choice << " is not the right number." << endl;

            if (choice > secretNumber) {
                cout << "The secret number is smaller than the number you have chosen." << endl<<endl;
            } else {
                cout << "The secret number is greater than the number you have chosen." << endl<<endl;
            }

            cout << "******************* " << attempts - i << " choices left. ******************* " << endl<<endl;

            if (i == attempts) {
                cout << "You couldn't find the secret number, it was " << secretNumber << ". You lose!!" << endl;
                cout << "Play the game again to win!!!" << endl;
                cout << "*********** Press 'y' to Try Again ************";
                cin>>input;
		        switch (input) 
				{
                    case 'y':
                        system("CLS");
                        game();
                    break;
                    default:
                        cout << "Wrong Alphabet !!! ";
                    break;
			    }
			}
        }
    }
}



int main() {
    char input;
    int id = 16046;
    string pass = "#project";  // Enclose the password in quotes
    cout<<"==========================================================================================================="<<endl;
	cout << "************************************************* Welcome ***********************************************" << endl;
	cout<<"==========================================================================================================="<<endl<<endl;
	cout<<"Enter Your ID :";
	cin>>id;
	cout<<endl;
	cout<<"Enter Your Password :";
	cin>>pass;
	
    
	if (id == 16046 && pass == "#project") {
        system("CLS");
    cout<<"==========================================================================================================="<<endl;
	cout << "************************************************* Welcome ***********************************************" << endl ;
	cout<<"==========================================================================================================="<<endl<<endl;
        game();
    } else {
        cout << "You have put wrong ID or password. Try again !!!!" << endl << endl << endl;
        cout << "*********** Press 'y' to Try Again ************";
        cin >> input;
        switch (input) {
            case 'y':
                system("CLS");
                main();
            break;
            default:
                cout << "Wrong Alphabet !!! ";
            break;
        }
    }

    
}

