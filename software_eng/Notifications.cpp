#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include "Notifications.h"


using namespace std;


void Notifications::sendNotificationsPatients()
{
    cout << "What would you like to send today?" << endl;
    getline(cin, notificationText);

    // Write the notification to the text file
    ofstream outFile("doctor_notifications.txt", ios::app);
    if (outFile.is_open()) {
        outFile << notificationText << endl;
        outFile.close();
    }
    else {
        cerr << "Unable to open file for writing." << endl;
    }

   
}

void Notifications::sendNotificationsDoctors()
{
    cout << "What would you like to send today?" << endl;
    getline(cin, notificationText);

    // Write the notification to the text file
    ofstream outFile("patient_notifications.txt", ios::app);
    if (outFile.is_open()) {
        outFile << notificationText << endl;
        outFile.close();
    }
    else {
        cerr << "Unable to open file for writing." << endl;
    }

}



void Notifications::viewNotificationsDoctors()
{
    cout << "Hello, here are your current notifications:" << endl;

    // Read the notifications from the text file
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

void Notifications::viewNotificationsPatients()
{
    cout << "Hello, here are your current notifications:" << endl;

    // Read the notifications from the text file
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

