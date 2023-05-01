#ifndef USER_INFORMATION
#define USER_INFORMATION
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>

using namespace std;


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
    User_information();
    // Constructor: Initialize the Information object with the given CSV file name
    User_information(const string& patient_information);

    // Method to enter new information into the CSV file using user input
    void enter_information();

    // Method to read the information from the CSV file
    void read_information();

    // Method to edit information in the CSV file at a specified row and column using user input
    void edit_information();
};



#endif // USER_INFORMATION
