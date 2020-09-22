#include "Menu.h"

using namespace std;

void menu::printMenu() {

    cout << "1) Add two numbers" << endl;
    cout << "2) Subtract two numbers" << endl;
    cout << "3) Multiply two numbers" << endl;
    cout << "4) Divide two numbers" << endl;
    cout << "5) Find the result of an exponet" << endl;
    cout << "6) Find the hypotenuse" << endl;
    cout << "7) Find the circumference of a circle" << endl;
    cout << "8) Find the sin of a number" << endl;
    cout << "9) Find the cos of a number" << endl;
    cout << "10) Find the tan of a number" << endl;
    cout << "11) Exit menu" << endl;
    //marks end of menu prompt. Beginning of user input
    cout << endl << "Please enter the number of the menu option you wish to use: ";     //Extra endl to increase readability for user
    cin >> choice;

    switch (choice) {
    case 1:   //calls function that calculates a + b = c
        cout << "The function for addition has not been implemented yet." << endl;
        break;
    case 2:   //calls function that calculates a - b = c
        cout << "The function for subtraction has not been implemented yet." << endl;
        break;
    case 3:   //calls function that calculates a * b = c
        cout << "The function for multiplication has not been implemented yet." << endl;
        break;
    case 4:   //calls function that calculates a / b = c
        cout << "The function for divison has not been implemented yet." << endl;
        break;
    case 5:   //calls function that calculates a^b = c
        cout << "The function for exponets has not been implemented yet." << endl;
        break;
    case 6:   //calls function that calculates a^2 + b^2 = c^2
        cout << "The function for the hypotenuse has not been implemented yet." << endl;
        break;
    case 7:   //calls function that calculates b = 2pi*a
        cout << "The function for the circumference has not been implemented yet." << endl;
        break;
    case 8:   //calls function that calculates sin(a)
        cout << "The function for sine has not been implemented yet." << endl;
        break;
    case 9:   //calls function that calculates cos(a)
        cout << "The function for cosine has not been implemented yet." << endl;
        break;
    case 10:   //calls function that calculates tan(a)
        cout << "The function for tangent has not been implemented yet." << endl;
        break;
    case 11:   //Exit menu statement. Returns to main which will then end program
        cout << "Exiting now" << endl;
        return;
        break;
    default:
        cout << "Please enter in a valid menu option" << endl;
        break;
    }

    cout << endl;
    printMenu();                      //Function is not allowed to end until the exit command is used
    return;                       //Return to match code standards/avoid being trapped in function in case of errors
}