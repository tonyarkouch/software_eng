//tony was here

//attempt to sync from laptop
//attempt to sync after closing and opening proj from laptop
#include <iostream>
using namespace std;

class Patient
{
public:
    void menu_patient() {
        int choice;

        do {
            cout << "==== Welcome Patient ====" << endl;
            cout << "if you are booking an appointment please enter 1" << endl;
            cout << "if you need to enter information please enter 2" << endl;
            cout << "if you are updating existing information please enter 3" << endl;
            cout << "if you are sending notifications or sending a new notification please enter 4" << endl;
            cout << " if you are checking in please enter 5" << endl;
            cout << "to return to previous menu please enter 6" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                //reserved to call appt set function
                break;
            case 2:
                //reserved to call information enter function
                break;
            case 3:
                //reserved to call information update menu function
                break;
            case 4:
                //reserved to call notification function
            case 5:
                //resereved to call check in function
                break;
            case 6:
                cout << "Thank you for visiting!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
            }
        } while (choice != 6);
    }


};
class Doctor
{



};
class Staff_member
{



};


class User_io
{

public:

    // Menu function
    void menu_user_io() {
        Patient patient;
        int choice;

        do {
            cout << "==== Menu ====" << endl;
            cout << "if you are a patient please enter 1" << endl;
            cout << "if you are a staff member please enter 2" << endl;
            cout << "if you are a doctor please enter 3" << endl;
            cout << "to exit menue please enter 4" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
                //reserved to call patient menu function
                patient.menu_patient();
                break;
            case 2:
                //reserved to call staff member menue function
                break;
            case 3:
                //reserved to call the doctor menue function
                break;
            case 4:
                cout << "Thank you for visiting!" << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
            }
        } while (choice != 4);
    }
};








int main() {
    User_io io;
    io.menu_user_io();
    return 0;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
