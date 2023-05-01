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
#include <limits>

using namespace std;
using std::cout;


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
class User_information
{
private:
    string patient_information;

    // Helper function to read the CSV file and return a 2D vector containing its data
    vector<vector<string>> fileVector() {
        ifstream fileName(patient_information);
        string line;
        vector<vector<string>> data;

        while (getline(fileName, line)) {
            stringstream ss(line);
            vector<string> row;
            string cell;

            while (getline(ss, cell, ',')) {
                row.push_back(cell);
            }

            data.push_back(row);
        }

        fileName.close();
        return data;
    }

public:

    //defult constructor
    User_information() {}
    // Constructor: Initialize the Information object with the given CSV file name
    User_information(const string& patient_information) : patient_information(patient_information) {}

    // Method to enter new information into the CSV file using user input
    void enter_information() {
        ofstream fileName;
        fileName.open(patient_information, ios::app); // Open the file in append mode

        cout << "Enter the information separated by commas (e.g., John,Doe,123 Main St,johndoe@example.com): ";
        string input;
        getline(cin, input);

        fileName << input << "\n";
        fileName.close();
    }

    // Method to read the information from the CSV file
    void read_information() {
        vector<vector<string>> data = fileVector();

        for (const auto& row : data) {
            for (size_t i = 0; i < row.size(); ++i) {
                cout << row[i];
                if (i < row.size() - 1) {
                    cout << ", ";
                }
            }
            cout << endl;
        }
    }

    // Method to edit information in the CSV file at a specified row and column using user input
    void edit_information() {
        vector<vector<string>> data = fileVector();
        size_t row, col;
        string new_value;

        cout << "Enter the row and column indices (starting from 0) of the information you want to edit, separated by a space: ";
        cin >> row >> col;
        cin.ignore(); // Ignore any remaining newline characters in the input buffer

        cout << "Enter the new value: ";
        getline(cin, new_value);

        data[row][col] = new_value;

        ofstream fileName;
        fileName.open(patient_information); // Open the file in write mode (overwrite existing content)

        for (const auto& row : data) {
            for (size_t i = 0; i < row.size(); ++i) {
                fileName << row[i];
                if (i < row.size() - 1) {
                    fileName << ",";
                }
            }
            fileName << "\n";
        }

        fileName.close();
    }

};

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

class Patient
{
public:
    void menu_patient() 
    {
        int choice;
        User_information info_patient("patient_information.csv");

        while (true) {
            cout << "==== Welcome Patient ====" << endl;
            cout << "If you are booking an appointment please enter 1" << endl;
            cout << "If you need to enter information please enter 2" << endl;
            cout << "If you are updating existing information please enter 3" << endl;
            cout << "If you are sending notifications or sending a new notification please enter 4" << endl;
            cout << "If you are checking in please enter 5" << endl;
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
                return info_patient.enter_information();
            case 3:
                //reserved to call information update information function
                info_patient.edit_information();               
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
        }
        
    } 
    


};

class Doctor
{
public:
    void menu_doctor() {
        int choice;
        User_information info_doctor("patient_information.csv");

        while(true) {
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
                return;
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


};

class Staff_member
{
public:
    void menu_staff_member() {
        int choice;

        while(true) {
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
                break;
            case 3:
                //reserved to call information update menu function
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

        while(true){
            cout << "==== Menu ====" << endl;
            cout << "if you are a patient please enter 1" << endl;
            cout << "if you are a staff member please enter 2" << endl;
            cout << "if you are a doctor please enter 3" << endl;
            cout << "to exit menue please enter 4" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (choice) {
            case 1:
                //reserved to call patient menu function
                patient.menu_patient();
                return;
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
        } 
    }
};
int main() {
    User_io io;
    User_information x("patient_information.csv");
    io.menu_user_io();
   //Notification myNotification;
   // myNotification.sendNotification();
   // myNotification.ViewNotification();
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
