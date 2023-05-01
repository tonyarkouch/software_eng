#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"

using namespace std;


//defult constructor
User_information::User_information() {}
// Constructor: Initialize the Information object with the given CSV file name
User_information::User_information(const string& patient_information) : patient_information(patient_information) {}

// Method to enter new information into the CSV file using user input
void User_information::enter_information() {
    ofstream fileName;
    fileName.open(patient_information, ios::app); // Open the file in append mode

    cout << "Enter the information separated by commas (e.g., John,Doe,123 Main St,johndoe@example.com): ";
    string input;
    getline(cin, input);

    fileName << input << "\n";
    fileName.close();
}

// Method to read the information from the CSV file
void User_information::read_information() {
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
void User_information::edit_information() {
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