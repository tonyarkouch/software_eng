#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"
#include"Doctor.h" 
#include"Appointment.h"
#include "Notifications.h"
#include "User_io.h"

using namespace std;



//wirtten by Tony Arkouch


void Doctor:: menu_doctor()
{
    int choice;
    User_information info_doctor("patient_information.csv");
    Appointment appt_doc;
    Notifications notification_doc;
    vector<Appointment> appointments;
    Appointment appointment_obj;
    User_io user_io;

    while (true) {
        cout << "==== Welcome Doctor ====" << endl;
        cout << "If you are checking appointments please enter 1" << endl;
        cout << "If you need to enter information please enter 2" << endl;
        cout << "If you are updating existing information please enter 3" << endl;
        cout << "If you are send Notification please enter 4" << endl;
        cout << "if you need to check appointment status please enter 5" << endl;
        cout << "if you need to check pending Notifications Please enter 6" << endl;
        cout << "To return to previous menu please enter 7" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 1:
            //reserved to call appt view function
            appt_doc.appointment_view(appointments);
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
            notification_doc.sendNotificationsPatients();
            break;
        case 5:
            appt_doc.appointment_status(appointments);
        case 6:
            //reserved for Check notification function
            notification_doc.viewNotificationsDoctors();
            break;
        case 7:
            user_io.menu_user_io();
            return;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }
}

