#ifndef PATIENT
#define PATIENT
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"

using namespace std;



class Patient {
private:
    User_information info_patient;

public:
    void menu_patient();
};


#endif // PATIENT
