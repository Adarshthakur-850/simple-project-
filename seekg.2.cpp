#include<iostream>
#include<fstream>
using namespace std;

class employee {
private:
    char name[30];
    char employee_ID[20];
    char joining_DATE[20];
    char position[20];
    char marital_status[20];
    char age[10];
    char salary[20];
    char comment[80];

public:
    void getEmp_data() {
        cout << "Welcome to infoBrother: " << endl;
        cout << "============";
        cout << "\n\n Employee Name: ";
        cin.getline(name, 30);
        cout << "Employee ID: ";
        cin.getline(employee_ID, 20);
        cout << "Joining date:(DD/MM/YYYY): ";
        cin.getline(joining_DATE, 20);
        cout << "Job description: ";
        cin.getline(position, 20);
        cout << "Single/Married: ";
        cin.getline(marital_status, 20);
        cout << "Employee age: ";
        cin.getline(age, 10);
        cout << "Salary per month: $";
        cin.getline(salary, 20);
        cout << "Comment: ";
        cin.getline(comment, 80);
    }

    void showEmp_data() {
        cout << "\n\nEMPLOYEE DATA: " << endl;
        cout << "========================================\n" << endl;
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employee_ID << endl;
        cout << "Date of joining: " << joining_DATE << endl;
        cout << "Position: " << position << endl;
        cout << "Marital Status: " << marital_status << endl;
        cout << "Age of employee: " << age << endl;
        cout << "Salary: $" << salary << endl;
        cout << "Comment: " << comment << endl;
    }
};

class library {
public:
    employee emp;
    fstream fp, fp1;

    void writeEmployee() {
        fp.open("employee.txt", ios::out | ios::app);
        emp.getEmp_data();
        fp.write((char*)&emp, sizeof(emp));
        fp.close();
        cout << "Employee data saved successfully!" << endl;
    }

    void W_displayEmp() {
        fp1.open("employee.txt", ios::in);
        if (!fp1) {
            cout << "Error in opening file." << endl;
            return;
        }
        while (fp1.read((char*)&emp, sizeof(emp))) {
            emp.showEmp_data();
        }
        fp1.close();
    }
};

int main() {
    library lib;
    lib.writeEmployee();
    lib.W_displayEmp();
    return 0;
}
