# 🏥 Hospital Management System (C++)

A simple, menu-driven **Hospital Management System** developed using C++ and Object-Oriented Programming (OOP) concepts. This project helps manage basic hospital operations such as patient records, doctor details, appointment selection, and billing.

## 📌 Project Overview

The Hospital Management System is designed to simplify basic hospital management activities through a console-based application.

It allows users to add and view patient records, display available doctors, select doctors for appointments, and calculate hospital bills.

## ✨ Features

- **Add Patient:** Enter patient ID, name, age, and disease.
- **View Patients:** Display previously saved patient records.
- **View Doctors:** Show the list of doctors with their specializations.
- **Book Appointment:** Select a doctor using their assigned number.
- **Generate Bill:** Calculate the total consultation and medicine charges.
- **File Handling:** Store patient records in a text file.
- **Menu-Driven Interface:** Easy navigation through numbered options.

## 🛠️ Technologies Used

- **Programming Language:** C++
- **Concepts:** Object-Oriented Programming
- **File Handling:** `ifstream`, `ofstream`
- **Header Files:** `iostream`, `fstream`, `string`
- **Compiler:** GCC / G++

## 📚 OOP Concepts Used

| Concept | Implementation |
|---|---|
| Classes | Patient, Doctor, Appointment, Billing |
| Objects | p, d, a, b |
| Encapsulation | Combining data and functions inside classes |
| Abstraction | Using functions to perform specific operations |

Other C++ concepts include:
- Functions
- Variables and data types
- If-else statements
- Switch statements
- While and do-while loops
- File handling

## 📂 Project Structure

```text
Hospital-Management-System/
│
├── miniprojectoops.cpp
├── patients.txt
└── README.md
```

**Note:** `patients.txt` is created automatically when the first patient record is added.

## ⚙️ How to Run the Project

### Step 1: Clone the Repository

```bash
git clone https://github.com/your-username/Hospital-Management-System.git
```

### Step 2: Open the Project Folder

```bash
cd Hospital-Management-System
```

### Step 3: Compile the Program

```bash
g++ miniprojectoops.cpp -o hospital
```

### Step 4: Run the Program

**Windows:**
```bash
hospital.exe
```

**Linux / macOS:**
```bash
./hospital
```

## 🖥️ Main Menu

```text
===== HOSPITAL MANAGEMENT SYSTEM =====

1. Add Patient
2. View Patients
3. View Doctors
4. Book Appointment
5. Generate Bill
6. Exit

Enter Your Choice:
```

## 👨‍⚕️ Available Doctors

| Doctor | Specialization |
|---|---|
| Dr. Rahul | Cardiologist |
| Dr. Priya | Dentist |
| Dr. Amit | Neurologist |
| Dr. Sharma | Pediatrician |
| Dr. Usha | Gynecologist |

## 💾 Data Storage

Patient information is stored in `patients.txt` using C++ file handling.

- `ofstream` is used to write records.
- `ifstream` is used to read records.
- `ios::app` is used to append new records without removing existing ones.

## 🚀 Future Improvements

- Connect the application with a MySQL database.
- Add login and authentication.
- Save appointment details permanently.
- Store billing records.
- Add patient search and update functionality.

## 🎯 Learning Outcomes

Through this project, I learned how to:

- Implement classes and objects in C++.
- Apply basic OOP concepts.
- Perform file handling operations.
- Create a menu-driven application.
- Use conditional statements and loops.
- Develop a simple real-world management system.

## 👩‍💻 Author

**Usha**

BCA – 3rd Semester  
University Institute of Computing (UIC)  
Chandigarh University

## 📜 License

This project is created for educational and academic purposes.

---

⭐ If you find this project useful, feel free to star the repository!
