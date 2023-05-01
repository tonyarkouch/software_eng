#ifndef APPOINTMENT
#define APPOINTMENT
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Class for Appointment
class Appointment {
private:
    int doctorAReratments;
    string appointmentDate;
    string appointmentTime;
    string patientFirstName;
    string patientLastName;
    string doctorName;
public:
    Appointment();
    Appointment(int doctorAReratments, string appointmentDate, string appointmentTime, string patientFirstName, string patientLastName);
    string getAppointmentDate();
    string getAppointmentTime();
    string getPatientFirstName();
    string getPatientLastName();


// Function to set an appointment
    void appointment_set(vector<Appointment>& appointments);
// Function to view appointment information
    void appointment_view(vector<Appointment>& appointments);

// Function to check appointment status
    void appointment_status(vector<Appointment>& appointments);
};

#endif // APPOINTMENT

