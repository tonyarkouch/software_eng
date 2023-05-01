#ifndef NOTIFICATIONS
#define NOTIFICATIONS
#include <string> 

using namespace std;

class Notifications
{
private:
    string notificationText;
public:
    
    void viewNotificationsDoctors();
    void sendNotificationsDoctors();
    void viewNotificationsPatients();
    void sendNotificationsPatients();
};


#endif // !NOTIFICATIONS

