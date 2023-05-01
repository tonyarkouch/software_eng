#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include "Notifications.h"


using namespace std;


string Notifications::sendNotifications()
{
    cout << "What would you like to send today?" << endl;
    getline(cin, notificationText);
    return notificationText;
}

void Notifications::viewNotifications()
{
    cout << "Hello, here are your current notifications:" << endl;
    cout << notificationText << endl;
}

