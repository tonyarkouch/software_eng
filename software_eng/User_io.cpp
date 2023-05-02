#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_io.h"
#include "User_information.h"
#include "Patient.h"
#include "Doctor.h"
#include "Staff_member.h"

using namespace std;

void User_io::menu_user_io() {
    Patient patient;
    Doctor doctor;
    Staff_member staff_member;
    int choice;

    while (true) {
        cout << "==== Menu ====" << endl;
        cout << "if you are a patient please enter 1" << endl;
        cout << "if you are a staff member please enter 2" << endl;
        cout << "if you are a doctor please enter 3" << endl;
        cout << "to exit menu please enter 4" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {
        case 1:
            //reserved to call patient menu function
            patient.menu_patient();
            break;
        case 2:
            //reserved to call staff member menue function
            staff_member.menu_staff_member();
            break;
        case 3:
            //reserved to call the doctor menue function
            doctor.menu_doctor();
            break;
        case 4:
            cout << "Thank you for visiting!" << endl;
            return ;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }
}