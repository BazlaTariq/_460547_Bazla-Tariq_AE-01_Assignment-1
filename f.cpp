#include <iostream>
#include <string>

using namespace std;

const int number = 10;
const int CURVE_VALUE = 10;

struct Student {
    string name;
    int marks;
    char grade;
};

void calculateGrades(Student students[]) {
    for (int i = 0; i < number; i++) {
        if (students[i].marks >= 90)
            students[i].grade = 'A';
        else if (students[i].marks >= 80)
            students[i].grade = 'B';
        else if (students[i].marks >= 70)
            students[i].grade = 'C';
        else if (students[i].marks >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }
}

void displayClassAverage(Student students[]) {
    int totalMarks = 0;

    for (int i = 0; i < number; i++) {
        totalMarks += students[i].marks;
    }

    float average = static_cast<float>(totalMarks) / number;

    cout << "Class Average: " << average << endl;
}

void displayHighestGrade(Student students[]) {
    int highest = students[0].marks;

    for (int i = 1; i < number; i++) {
        if (students[i].marks > highest)
            highest = students[i].marks;
    }

    cout << "Highest Grade: " << highest << endl;
}

void displayLowestGrade(Student students[]) {
    int lowest = students[0].marks;

    for (int i = 1; i < number; i++) {
        if (students[i].marks < lowest)
            lowest = students[i].marks;
    }

    cout << "Lowest Grade: " << lowest << endl;
}

int main() {
    Student students[number];

   
    for (int i = 0; i < number; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;

        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> students[i].marks;
    }
    calculateGrades(students);

    cout << "\nGrades:" << endl;
    for (int i = 0; i < number; i++) {
        cout << students[i].name << " - Grade: " << students[i].grade << endl;
    }

    cout << endl;

    displayClassAverage(students);
    displayHighestGrade(students);
    displayLowestGrade(students);
    for (int i = 0; i < number; i++) {
        students[i].marks += CURVE_VALUE;
    }

    calculateGrades(students);

    cout << "\nGrades after applying curve:" << endl;
    for (int i = 0; i < number; i++) {
        cout << students[i].name << " - Grade: " << students[i].grade << endl;
    }

    return 0;
}