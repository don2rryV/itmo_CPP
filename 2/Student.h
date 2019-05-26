#pragma once


class Student {
public:
    Student();
    void takeData();
    void showData();

private:
    int mAdmissionNumber;
    char mName[20];
    float mMarks[5];
    float mAverage;
    const int LENGTH_NAME = 20;
    const int CNT_MARKS = 5;

    float mGetAverage();
};