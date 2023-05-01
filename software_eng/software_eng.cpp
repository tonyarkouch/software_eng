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
#include "User_io.h"
#include "User_information.h"
#include "Patient.h"
#include "Doctor.h"
#include "Staff_member.h"
#include "Notifications.h"
#include "Appointment.h"

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




int main() {
    User_io interface;
    interface.menu_user_io();

    return 0;

}





