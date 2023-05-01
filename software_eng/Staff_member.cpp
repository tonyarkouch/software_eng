#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"
#include "Staff_member.h"
#include "Appointment.h"
#include "Notifications.h"
#include "User_io.h"



Appointment appt_staff;
Notifications notification_staff;
vector<Appointment> appointments;
Appointment appointment_obj;
User_io user_io;


using namespace std;



void Staff_member::menu_staff_member() {
    int choice;
    User_information info_staff_memeber("patient_information.csv");

    while (true) {
        cout << "==== Welcome Staff Member ====" << endl;
        cout << "If you are checking appointments please enter 1" << endl;
        cout << "If you need to enter information please enter 2" << endl;
        cout << "if you need to book an appointment please enter 3" << endl;
        cout << "If you are updating existing information please enter 4" << endl;
        cout << "If you are Send a new notification please enter 5" << endl;
        cout << "if you Check Doctors notifications please enter 6" << endl;
        cout << "To return to previous menu please enter 7" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 1:
            //reserved to call appt status function
            appt_staff.appointment_status(appointments);
            break;
        case 2:
            //reserved to call information enter function
            info_staff_memeber.enter_information();
            break;
        case 3:
            appt_staff.appointment_set(appointments);
            break;
        case 4:
            //reserved to call information update menu function
            info_staff_memeber.edit_information();
            break;
        case 5:
            //reserved to call notification function
            notification_staff.sendNotificationsPatients();
        case 6:
            //resereved to call update information function
            notification_staff.viewNotificationsDoctors();
            break;
        case 7:
            user_io.menu_user_io();
            return;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    }
}


