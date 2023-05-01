#ifndef STAFF_MEMBER
#define STAFF_MEMBER
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include "User_information.h"


using namespace std;


class Staff_member
{
private:
    User_information info_staff_member;
public:
    void menu_staff_member(); 
};

#endif // !STAFF_MEMBER
