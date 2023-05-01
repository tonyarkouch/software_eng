#ifndef DOCTOR
#define DOCTOR
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"

using namespace std;

class Doctor
{
private:
    User_information info_doc;
public:
    void menu_doctor();
};




#endif // DOCTOR
