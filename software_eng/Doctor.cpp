#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"
#include"Doctor.h"

using namespace std;



void Doctor:: menu_doctor()
{
    int choice;
    User_information info_doctor("patient_information.csv");

    while (true) {
        cout << "==== Welcome Doctor ====" << endl;
        cout << "If you are checking appointments please enter 1" << endl;
        cout << "If you need to enter information please enter 2" << endl;
        cout << "If you are updating existing information please enter 3" << endl;
        cout << "If you are sending notifications or sending a new notification please enter 4" << endl;
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
            info_doctor.enter_information();
            break;
        case 3:
            //reserved to call information update menu function
            info_doctor.edit_information();
            break;
        case 4:
            //reserved for send notification funtion
            break;
        case 5:
            //reserved for update information funtion
            break;
        case 6:
            cout << "Thank you for visiting!" << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }
}

