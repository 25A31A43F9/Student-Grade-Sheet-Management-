#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks1, marks2, marks3;
    float total, average;
    char grade;

public:
    void input()
    {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;

        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;

        cout << "Enter Marks for Subject 3: ";
        cin >> marks3;

        calculate();
    }

    void calculate()
    {
        total = marks1 + marks2 + marks3;
        average = total / 3;

        if (average >= 90)
            grade = 'A';
        else if (average >= 75)
            grade = 'B';
        else if (average >= 60)
            grade = 'C';
        else if (average >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\n--------------------------------------";
        cout << "\nRoll Number : " << rollNo;
        cout << "\nStudent Name: " << name;
        cout << "\nMarks 1     : " << marks1;
        cout << "\nMarks 2     : " << marks2;
        cout << "\nMarks 3     : " << marks3;
        cout << "\nTotal Marks : " << total;
        cout << "\nAverage     : " << fixed << setprecision(2) << average;
        cout << "\nGrade       : " << grade;
        cout << "\n--------------------------------------\n";
    }
};

int main()
{
    int n;

    cout << "===== STUDENT GRADE SHEET MANAGEMENT SYSTEM =====\n";

    cout << "\nEnter Number of Students: ";
    cin >> n;

    Student s[n];

    // Input student details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << ":";
        s[i].input();
    }

    // Display grade sheets
    cout << "\n\n===== STUDENT GRADE SHEETS =====\n";

    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}