#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"

using namespace std;
//wirtten by Tony Arkouch
//

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
    string firstName;
    string new_value;

    cout << "Enter the first name you want to search for: ";
    cin >> firstName;
    cin.ignore(); // Ignore any remaining newline characters in the input buffer

    // Find the row with the matching first name
    int row = -1;
    for (size_t r = 1; r < data.size(); ++r) {
        if (data[r][0] == firstName) {
            row = static_cast<int>(r);
            break;
        }
    }

    if (row == -1) {
        cout << "No matching first name found." << endl;
        return;
    }

    // Prompt the user to edit each cell in the found row
    for (size_t col = 0; col < data[static_cast<size_t>(row)].size(); ++col) {
        char edit;
        cout << "Current value at column " << col << ": " << data[static_cast<size_t>(row)][col] << endl;
        cout << "Do you want to edit this value? (y/n): ";
        cin >> edit;
        cin.ignore(); // Ignore any remaining newline characters in the input buffer

        if (edit == 'y' || edit == 'Y') {
            cout << "Enter the new value: ";
            getline(cin, new_value);
            data[static_cast<size_t>(row)][col] = new_value;
        }
    }

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