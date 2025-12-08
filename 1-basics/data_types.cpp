#include <iostream>
using namespace std;

int main() {
    // --- Basic Data Types ---
    int age = 25;
    float height = 1.75f;
    double weight = 70.5;
    char grade = 'A';
    bool is_student = true;
    string name = "Moustafa";

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " m" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is student? " << (is_student ? "Yes" : "No") << endl;

    cout << "\n--- Using Struct ---\n";

    // --- Struct Example ---
    struct Employee {
        string fname;
        string lname;
        float salary;
        float bonus;
        float net_salary;
        bool is_pass;
    };

    // Create employee objects
    Employee e1, e2;

    e1.fname = "Moustafa";
    e1.lname = "Ahmed";
    e1.salary = 30000;
    e1.bonus = 5000;
    e1.net_salary = e1.salary + e1.bonus;
    e1.is_pass = true;

    // Copy e1 to e2
    e2 = e1;

    // Display e2 info
    cout << "Employee Name: " << e2.fname << " " << e2.lname << endl;
    cout << "Salary: " << e2.salary << endl;
    cout << "Bonus: " << e2.bonus << endl;
    cout << "Net Salary: " << e2.net_salary << endl;
    cout << "Pass Status: " << (e2.is_pass ? "Passed" : "Failed") << endl;

    return 0;
}
