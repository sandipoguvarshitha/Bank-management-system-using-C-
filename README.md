# Bank-Management-System-using-C++

A simple menu-driven Bank Management System developed in **C++ Programming** using **Classes**, **File Handling**, and **Object-Oriented Programming Concepts**. This project demonstrates account creation, deposit and withdrawal operations, account display, and basic banking functionalities using file storage.

The application allows users to:

* Create bank accounts
* Deposit money
* Withdraw money
* Display all account details
* Manage balances dynamically
* Store account data using files

---

# ✨ Features

## 🏦 Account Management

Create bank accounts with:

* Account Number
* Customer Name
* Initial Balance

---

## 📋 Display Accounts

Displays all available customer account details stored in the file.

---

## 💰 Deposit Amount

Allows users to deposit money into an account.

Features:

* Updates account balance
* Displays updated balance

---

## 💸 Withdraw Amount

Allows users to withdraw money from an account.

Features:

* Checks sufficient balance
* Prevents invalid withdrawals
* Displays remaining balance

---

## 📁 File Handling

Uses file handling for storing account information permanently.

Functions used:

* `ofstream`
* `ifstream`

---

## 🧠 Object-Oriented Programming

Implements banking operations using:

* Classes
* Member Functions
* Objects

---

# 🛠️ Technologies Used

* C++ Programming
* File Handling
* Object-Oriented Programming
* GCC Compiler
* Linux/Unix Environment

---

# 📂 Project Structure

.
├── main.cpp
├── header.h
├── bank.txt
└── README.md

---

# 📌 Working Principle

1. User selects an option from the menu
2. Program performs selected banking operation
3. Account details are stored using file handling
4. Deposit and withdrawal operations update balance
5. Display option shows all customer accounts

---

# 🔥 Key Concepts Demonstrated

✔️ Classes and Objects

✔️ File Handling in C++

✔️ Object-Oriented Programming

✔️ Menu Driven Programming

✔️ Banking Operations

✔️ Conditional Statements

✔️ Loops

✔️ Functions

✔️ Array of Objects

---

# ⚙️ Setup & Installation Guide

## 📥 Clone the Repository

```bash
git clone https://github.com/sandipoguvarshitha/Bank-management-system-using-C-.git

cd Bank-management-system-using-C-
```

---

# 🛠️ Requirements

## Linux Environment Recommended

This project works on:

* Ubuntu
* Debian
* Kali Linux
* Fedora
* Arch Linux

It can also run on:

* Windows (MinGW / CodeBlocks)
* macOS

---

# Required Compiler

## Install GCC/G++ Compiler

### Ubuntu / Debian

```bash
sudo apt update
sudo apt install build-essential
```

### Fedora

```bash
sudo dnf install gcc-c++
```

### Arch Linux

```bash
sudo pacman -S gcc
```

---

# ▶️ Compile the Program

```bash
g++ main.cpp -o bank
```

---

# ▶️ Run the Application

## Linux/macOS

```bash
./bank
```

## Windows

```bash
bank.exe
```

---

# 💻 Sample Menu

```text
===== BANK MENU =====

1. Create Account
2. Deposit
3. Withdraw
4. Display Accounts
5. Exit
```

---

# 💬 Example Account Creation

```text
Enter account number, name and balance

1001
John
5000

Account created successfully
```

---

# 💬 Example Deposit

```text
Enter amount to deposit

2000

Updated balance:7000
```

---

# 💬 Example Withdrawal

```text
Enter withdrawal amount

1500

Withdrawal successful

Remaining balance:5500
```

---

# 💬 Example Display

```text
Account Details

Account Number : 1001
Name           : John
Balance        : 5500
```

---

# 🧩 Bank Class Structure

```cpp
class bank
{
    int accountnumber;
    char name[20];
    float balance;
    int withdrawamount;
    int depositamt;

public:

    void create_account();
    void deposit();
    void withdraw();
    void display();
};
```

---

# 📚 Important Functions Used

| Function | Purpose              |
| -------- | -------------------- |
| ofstream | Write data into file |
| ifstream | Read data from file  |
| open()   | Open file            |
| close()  | Close file           |
| cin      | Read user input      |
| cout     | Display output       |
| exit()   | Exit the program     |

---

# 🚀 Future Enhancements

* Search Account by Account Number
* Update Account Details
* Delete Account
* Password Protection
* ATM Simulation
* Interest Calculation
* Transaction History
* File Synchronization
* Database Integration
* Online Banking Features

---

# ⚠️ Important Notes

* Account index should be between 0-19
* Account data is stored using text files
* Deposit and withdrawal currently update memory only
* File handling needs improvement for permanent transaction storage
* Data may become inconsistent if files are modified manually

---

# 👨‍💻 Learning Outcomes

This project helps understand:

* Object-Oriented Programming
* File Handling in C++
* Banking Logic
* Menu Driven Applications
* Arrays of Objects
* Basic Data Management
* Conditional Programming
* User Interaction in Console Applications

---

# ⭐ Support

If you found this project useful:

⭐ Star the repository

🍴 Fork the project

🛠️ Contribute improvements

---

# 👨‍💻 Author

Developed using **C++ Programming Language** and **Object-Oriented Programming Concepts**.
