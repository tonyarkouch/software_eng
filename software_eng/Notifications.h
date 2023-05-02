// Header guard to prevent multiple includes of the same file
#ifndef NOTIFICATIONS
#define NOTIFICATIONS
#include <string> // include necessary header files

using namespace std;

class Notifications
{
private:
    string notificationText; // private member variable
public:
    // Public member functions for viewing and sending notifications to doctors and patients
    void viewNotificationsDoctors();
    void sendNotificationsDoctors();
    void viewNotificationsPatients();
    void sendNotificationsPatients();
};


#endif // !NOTIFICATIONS

