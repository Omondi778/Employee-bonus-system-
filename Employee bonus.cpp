C++
#include <iostream>
using namespace std;

int main()
{
    string name;
    double salary, bonus, totalSalary;

    for (int i = 1; i <= 5; i++)
    {
        cout << "\nEnter employee name: ";
        cin >> name;

        cout << "Enter basic salary: ";
        cin >> salary;

        bonus = 0.05 * salary;

        totalSalary = salary + bonus;

        cout << "\n------ EMPLOYEE REPORT ------" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: KSh " << salary << endl;
        cout << "Bonus: KSh " << bonus << endl;
        cout << "Total Salary: KSh " << totalSalary << endl;
    }

    return 0;
}
