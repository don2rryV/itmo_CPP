#include <bits/stdc++.h>

#include "Student.h"

using namespace std;

Student::Student(){
    mAdmissionNumber = 0;
    strcpy(mName, "");
    mAverage = 0;

}


void Student::takeData() {
    cout << "Enter Admission number\n";
    int numb;
    cin >> numb;
    while (numb > 9999) {
        cout << "Wrong number. Enter again\n";
        cin >> numb;
    }
    mAdmissionNumber = numb;
    cout << "Enter name\n";
    string name;
    cin >> name;
    while (name.length() > LENGTH_NAME) {
        cout << "Wrong name. Enter again\n";
        cin >> name;
    }
    strcpy(mName, name.c_str());
    cout << "Enter marks\n";
    int x;
    for (int i = 0; i < CNT_MARKS; ++i) {
        cin >> x;
        mMarks[i] = x;
    }
    mGetAverage();

};


void Student::showData() {
    cout << "Admission number: " << setw(4) << setfill('0') << mAdmissionNumber << endl;
    cout << "Name: " << mName << endl;
    cout << "Marks: ";
    for (int i = 0; i < CNT_MARKS; ++i) {
        cout << mMarks[i] << ' ';
    }
    cout << endl << "Average mark: " << mAverage << endl;
};