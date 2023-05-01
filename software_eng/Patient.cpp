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
#include "Notifications.h"
#include"Appointment.h"

using namespace std;



void Patient::menu_patient()
{
    int choice;
    User_information info_patient("patient_information.csv");
    vector<Appointment> appointments;
    Appointment appointment_obj;
    Notifications notification_obj;
    User_io user_io;

    while (true) {
        cout << "==== Welcome Patient ====" << endl;
        cout << "If you are booking an appointment please enter 1" << endl;
        cout << "If you need to enter information please enter 2" << endl;
        cout << "If you are updating existing information please enter 3" << endl;
        cout << "If you are sending notifications please enter 4" << endl;
        cout << "if you need to check your notifications please enter 5" << endl;
        cout << "If you are checking you appointment status please enter 6" << endl;
        cout << "To return to previous menu please enter 7" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice) {
        case 1:
            //reserved to call appt set function
            appointment_obj.appointment_set(appointments);
            break;
        case 2:
            //reserved to call information enter function
            info_patient.enter_information();
            break;
        case 3:
            //reserved to call information update information function
            info_patient.edit_information();
            break;
        case 4:
            //reserved to call send notification function
            notification_obj.sendNotificationsDoctors();
        case 5:
            //resereved to call view notifications in function
            notification_obj.viewNotificationsPatients();
            break;
        case 6:
            //reserved to call appointment status funtion
            appointment_obj.appointment_status(appointments);
            break;
        case 7:
            cout << "Thank you for visiting!" << endl;
            user_io.menu_user_io();
            return;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }

}
