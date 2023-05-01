#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <limits>
#include <string>
#include <algorithm>
#include "Appointment.h"

using namespace std;

Appointment::Appointment() {}

Appointment::Appointment(int doctorAReratments, string appointmentDate, string appointmentTime, string patientFirstName, string patientLastName) {
    this->doctorAReratments = doctorAReratments;
    this->appointmentDate = appointmentDate;
    this->appointmentTime = appointmentTime;
    this->patientFirstName = patientFirstName;
    this->patientLastName = patientLastName;
}

string Appointment::getAppointmentDate() {
    return appointmentDate;
}
string Appointment::getAppointmentTime() {
    return appointmentTime;
}
string Appointment::getPatientFirstName() {
    return patientFirstName;
}
string Appointment::getPatientLastName() {
    return patientLastName;
}

void Appointment::appointment_set(vector<Appointment>& appointments) {
    string appointmentDate, patientFirstName, patientLastName;
    int appointmentTime;
    cout << "Enter the date for the appointment (MM/DD/YYYY): ";
    cin >> appointmentDate;
    cout << "Enter the time for the appointment (1-24): ";
    cin >> appointmentTime;
    cout << "Enter the patient's first name: ";
    cin >> patientFirstName;
    cout << "Enter the patient's last name: ";
    cin >> patientLastName;
    // Check if the requested appointment time is available
    bool available = true;
    for (auto& appointment : appointments) {
        if (appointment.getAppointmentDate() == appointmentDate &&
            stoi(appointment.getAppointmentTime()) == appointmentTime) {
            available = false;
            break;
        }
    }

    if (available) {
        cout << "The following doctors are available for the requested time:" << endl;
        cout << "-----------------\n1. Arkouch\n2. Centeno\n3. Lozano\n4. Tanvir\n-----------------" << endl;
        cout << "Enter the name of the doctor: ";
        
        cin >> doctorName;
        // Code to confirm and save the appointment
        appointments.push_back(Appointment(1, appointmentDate, to_string(appointmentTime), patientFirstName, patientLastName));
        cout << "Appointment set for " << doctorName << " on " << appointmentDate << " at " << appointmentTime << ":00 for " << patientFirstName << " " << patientLastName << endl;
    }
    else {
        cout << "The requested time is not available. Please choose a different time." << endl;
    }
}

void Appointment::appointment_view(vector<Appointment>& appointments) {
    string firstName, lastName;
    cout << "Enter the patient's first name: ";
    cin >> firstName;
    cout << "Enter the patient's last name: ";
    cin >> lastName;

    // Search for appointments with matching patient name
    vector<Appointment> matchingAppointments;
    for (auto& appointment : appointments) {
        // Code to retrieve patient name for the appointment
        if (true /* Check if patient name matches */) {
            matchingAppointments.push_back(appointment);
        }
    }

    if (matchingAppointments.empty()) {
        cout << "No appointments found for " << firstName << " " << lastName << endl;
    }
    else {
        cout << "Appointments for " << firstName << " " << lastName << ":" << endl;
        for (auto& appointment : matchingAppointments) {
            // Code to retrieve doctor name for the appointment
            cout << "Doctor: " << "Dr. " << " | Date: " << appointment.getAppointmentDate() << " | Time: " << appointment.getAppointmentTime() << ":00" << endl;
        }
    }
}

void Appointment::appointment_status(vector<Appointment>& appointments) {
    string appointmentDate;
    cout << "Enter the date of the appointment (MM/DD/YYYY): ";
    cin >> appointmentDate;

    // Search for appointments with matching date
    vector<Appointment> matchingAppointments;
    for (auto& appointment : appointments) {
        if (appointment.getAppointmentDate() == appointmentDate) {
            matchingAppointments.push_back(appointment);
        }
    }

    if (matchingAppointments.empty()) {
        cout << "No appointments found for " << appointmentDate << endl;
    }
    else {
        cout << "Appointments on " << appointmentDate << ":" << endl;
        for (auto& appointment : matchingAppointments) {
            // Code to retrieve doctor and patient name for the appointment
            cout << "Doctor: " << "Dr. " <<doctorName  << " | Patient: " <<appointment.getPatientFirstName() <<"" << " | Time: " << appointment.getAppointmentTime() << ":00" << endl;
        }
    }
}



