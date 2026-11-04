
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Patient {
public:
    int id, age;
    string name, disease;

    void addPatient() {
        cout << "\nEnter Patient ID: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Patient Name: ";
        getline(cin, name);

        cout << "Enter Age: ";
        cin >> age;

        cin.ignore();
        cout << "Enter Disease: ";
        getline(cin, disease);

        ofstream file("patients.txt", ios::app);
        file << id << " " << name << " "
             << age << " " << disease << endl;
        file.close();

        cout << "\nPatient Added Successfully!\n";
    }

    void viewPatients() {
        ifstream file("patients.txt");

        if (!file) {
            cout << "\nNo patient records found.\n";
            return;
        }

        cout << "\n--- Patient Records ---\n";

        while (file >> id >> name >> age >> disease) {
            cout << "\nID: " << id;
            cout << "\nName: " << name;
            cout << "\nAge: " << age;
            cout << "\nDisease: " << disease << endl;
        }

        file.close();
    }
};

class Doctor {
public:
    void showDoctors() {
        cout << "\n--- Doctor List ---\n";
        cout << "1. Dr. Rahul - Cardiologist\n";
        cout << "2. Dr. Priya - Dentist\n";
        cout << "3. Dr. Amit - Neurologist\n";
        cout << "4. Dr. Sharma - Pediatrician\n";
        cout << "5. Dr. Usha - Gynecologist\n";
    }
};

class Appointment {
public:
    void bookAppointment() {
        int patientID, doctorChoice;

        cout << "\nEnter Patient ID: ";
        cin >> patientID;

        cout << "\nSelect Doctor:\n";
        cout << "1. Dr. Rahul\n";
        cout << "2. Dr. Priya\n";
        cout << "3. Dr. Amit\n";
        cout << "4. Dr. Sharma\n";
        cout << "5. Dr. Usha\n";
        cout << "Enter choice: ";
        cin >> doctorChoice;

        if (doctorChoice >= 1 && doctorChoice <= 5) {
            cout << "\nAppointment Booked Successfully!\n";
        } else {
            cout << "\nInvalid Doctor Choice!\n";
        }
    }
};

class Billing {
public:
    void generateBill() {
        int consultation, medicine;

        cout << "\nEnter Consultation Fee: ";
        cin >> consultation;

        cout << "Enter Medicine Charges: ";
        cin >> medicine;

        cout << "\nTotal Bill: Rs. "
             << consultation + medicine << endl;
    }
};

int main() {
    Patient p;
    Doctor d;
    Appointment a;
    Billing b;

    int choice;

    do {
        cout << "\nHOSPITAL MANAGEMENT SYSTEM \n";
        cout << "1. Add Patient\n";
        cout << "2. View Patients\n";
        cout << "3. View Doctors\n";
        cout << "4. Book Appointment\n";
        cout << "5. Generate Bill\n";
        cout << "6. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            p.addPatient();
            break;

        case 2:
            p.viewPatients();
            break;

        case 3:
            d.showDoctors();
            break;

        case 4:
            a.bookAppointment();
            break;

        case 5:
            b.generateBill();
            break;

        case 6:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
