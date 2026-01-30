#include<iostream>
using namespace std;
	class AcademicRecord{
	protected:
    int rollNumber;
    float academicMarks;

    public:
    void getAcademicDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Academic Marks: ";
        cin >> academicMarks;
    }

    void displayAcademicDetails() {
        cout << "Roll Number    : " << rollNumber << endl;
        cout << "Academic Marks : " << academicMarks << endl;
    }
	};
	class SportsRecord {
protected:
    string sportName;
    float sportsScore;

public:
    void getSportsDetails() {
        cout<<"Enter Sport Name: ";
        cin>>sportName;
        cout<<"Enter Sports Score (out of 100): ";
        cin>>sportsScore;
    }

    void displaySportsDetails() {
        cout << "Sport Name     : " << sportName << endl;
        cout << "Sports Score   : " << sportsScore << "/100" << endl;
    }
};
class Student : public AcademicRecord, public SportsRecord {
public:
    void readStudentInfo() {
        cout << "     Enter Student Information " << endl;
        getAcademicDetails();
        getSportsDetails();
    }

    void calculateAndDisplayResult() {
        cout << "     Result Card\n" << endl;
        displayAcademicDetails();
        displaySportsDetails();
        float totalPerformance = (academicMarks + sportsScore) / 2.0;
        cout << "Overall Performance Score: " << totalPerformance <<"%"<< endl;

        if (totalPerformance >= 80) {
            cout << "Grade: A" << endl;
        } else if (totalPerformance >= 60) {
            cout << "Grade: B" << endl;
        } else {
            cout << "Grade: C" << endl;
        }
    }
};
int main() {
    Student s;
    s.readStudentInfo();
    s.calculateAndDisplayResult();

    return 0;
}
