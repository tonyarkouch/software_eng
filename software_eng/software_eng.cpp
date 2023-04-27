//tony was here

//attempt to sync from laptop
#include <iostream>
using namespace std;

class user_io 
{
 public:
    
    // Menu function
    void menu() {
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

class patient
{


};
class doctor 
{



};
class Staff_member
{



};

int main() {
    user_io io;
    io.menu();
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
