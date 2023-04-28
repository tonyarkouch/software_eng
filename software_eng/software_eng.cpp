//tony was here
//fatima was here
// The homie Jesus was here
//attempt to sync from laptop
//attempt to sync after closing and opening proj from laptop
//pushing to test .txt upload
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>

using namespace std;


vector<vector<string>> fileVector(const char* csv_name)
{
    ifstream fileName;
    fileName.open(csv_name);
    string d;
    vector <string> myVec;
    vector<vector<string> > data;

    int i = 0;

    while (!fileName.eof()) {

        fileName >> d;
        stringstream ss(d);
        vector <string> myVec;
        string hold;

        while (getline(ss, hold, ',')) {
            myVec.push_back(hold);
        }

        data.push_back(myVec);
        i += 1;
    }
    data.erase(data.end() - 1);

    fileName.close();
    return data;

}

class Patient
{
public:
    void menu_patient() {
        int choice;

        do {
            cout << "==== Welcome Patient ====" << endl;
            cout << "If you are booking an appointment please enter 1" << endl;
            cout << "If you need to enter information please enter 2" << endl;
            cout << "If you are updating existing information please enter 3" << endl;
            cout << "If you are sending notifications or sending a new notification please enter 4" << endl;
            cout << "If you are checking in please enter 5" << endl;
            cout << "To return to previous menu please enter 6" << endl;
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

class Notification 
{
public:
    void ViewNotification() 
    {
        cout << "Hello, here are your current notifications:" << endl;
        cout << notificationText << endl;
    }
    string sendNotification() 
    {
        cout << "What would you like to send today?" << endl;
        getline(cin, notificationText);
        return notificationText;
    }
private:
    string notificationText;
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

<<<<<<< Updated upstream
class Notification 
{
public:
    void ViewNotification() 
    {
        cout << "Hello, here are your current notifications:" << endl;
        cout << notificationText << endl;
    }
    string sendNotification() 
    {
        cout << "What would you like to send today?" << endl;
        getline(cin, notificationText);
        return notificationText;
    }
private:
    string notificationText;
};





=======
>>>>>>> Stashed changes

int main() {
    User_io io;
    io.menu_user_io();
    Notification myNotification;
    myNotification.sendNotification();
    myNotification.ViewNotification();
    return 0;
}
class Appointment {
private:
    string doctorAppointments;
    string appointmentDate;
    string appointmentTime;
public:
    // Constructor
    Appointment(string docAppointments, string appDate, string appTime) {
        doctorAppointments = docAppointments;
        appointmentDate = appDate;
        appointmentTime = appTime;
    }

    // Function to get available date and time
    string getAvailableDateAndTime() {

        return "Available date and time";
    }

    // Function to view appointment
    void appointment_view(string lastName, string firstName) {

        cout << "Appointment details for " << lastName << ", " << firstName << ":" << endl;
        cout << "Doctor: " << doctorAppointments << endl;
        cout << "Date: " << appointmentDate << endl;
        cout << "Time: " << appointmentTime << endl;
    }

    // Function to check appointment status
    void appointment_status() {

        cout << "Appointment status: Confirmed" << endl;
    }

    // Function to edit appointment
    void edit_appointment() {

        cout << "Appointment information edited successfully" << endl;
    }
};

// Function to set appointment
void appointment_set(string getDate, int getTime) {

    cout << "Appointment set successfully" << endl;
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
