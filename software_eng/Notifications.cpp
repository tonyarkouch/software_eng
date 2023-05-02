#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include "Notifications.h"


//Written by Fatima Tanvir

using namespace std;

// Implementation of the sendNotificationsPatients() function
void Notifications::sendNotificationsPatients()
{
    cout << "What would you like to send today?" << endl;
    // Promt user to input notification text
    getline(cin, notificationText);

    // Write the notification to the "doctor_notifications.txt" text file
    ofstream outFile("doctor_notifications.txt", ios::app);
    if (outFile.is_open()) {
        outFile << notificationText << endl;
        outFile.close();
    }
    else {
        cerr << "Unable to open file for writing." << endl;
    }

   
}
// Implemetation of the sendNotificationsDoctors() function
void Notifications::sendNotificationsDoctors()
{
    cout << "What would you like to send today?" << endl;
    // Promt user to input notification text
    getline(cin, notificationText);

    // Write the notification to the "patient_notifications.txt" text file
    ofstream outFile("patient_notifications.txt", ios::app);
    if (outFile.is_open()) {
        outFile << notificationText << endl;
        outFile.close();
    }
    else {
        cerr << "Unable to open file for writing." << endl;
    }

}


// Implementation of the viewNotificationsDoctors() function
void Notifications::viewNotificationsDoctors()
{
    cout << "Hello, here are your current notifications:" << endl;

    // Read the notifications from the "patient_notifications.txt" text file
    ifstream inFile("patient_notifications.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cerr << "Unable to open file for reading." << endl;
    }
}

// Implementation of the viewNotificationsPatients() function
void Notifications::viewNotificationsPatients()
{
    cout << "Hello, here are your current notifications:" << endl;

    // Read the notifications from the "doctor_notifications.txt" text file
    ifstream inFile("doctor_notifications.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
    else {
        cerr << "Unable to open file for reading." << endl;
    }
}

