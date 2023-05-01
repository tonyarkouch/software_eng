#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"
#include "Staff_member.h"


using namespace std;


void Staff_member::menu_staff_member() {
    int choice;
    User_information info_staff_memeber("patient_information.csv");

    while (true) {
        cout << "==== Welcome Staff Member ====" << endl;
        cout << "If you are checking appointments please enter 1" << endl;
        cout << "If you need to enter information please enter 2" << endl;
        cout << "If you are updating existing information please enter 3" << endl;
        cout << "If you are checking notifications or sending a new notification please enter 4" << endl;
        cout << "if you need to update an appointment please enter 5" << endl;
        cout << "To return to previous menu please enter 6" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 1:
            //reserved to call appt set function
            break;
        case 2:
            //reserved to call information enter function
            info_staff_memeber.enter_information();
            break;
        case 3:
            //reserved to call information update menu function
            info_staff_memeber.edit_information();
            break;
        case 4:
            //reserved to call notification function
        case 5:
            //resereved to call update information function
            break;
        case 6:
            cout << "Thank you for visiting!" << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);
}


