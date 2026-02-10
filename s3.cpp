#include <iostream>
using namespace std;

class Student {
public:
    float s1, s2, s3;

    Student(float m1 = 0.0, float m2 = 0.0, float m3 = 0.0) {
        s1 = m1;
        s2 = m2;
        s3 = m3;
    }

    float average() {
        return (s1 + s2 + s3) / 3.0;
    }

    float percentage() {
        return ((s1 + s2 + s3) / 300.0) * 100.0;
    }
};

int main() {
    float m1, m2, m3;

    cout << "Enter marks for Student 1 (3 subjects): ";
    cin >> m1 >> m2 >> m3;
    Student st1(m1, m2, m3); 

    cout << "Enter marks for Student 2 (3 subjects): ";
    cin >> m1 >> m2 >> m3;
    Student st2(m1, m2, m3);

    cout << "Enter marks for Student 3 (3 subjects): ";
    cin >> m1 >> m2 >> m3;
    Student st3(m1, m2, m3);

    cout << "\nStudent 1 Average: " << st1.average() << " Percentage: " << st1.percentage() << "%";
    cout << "\nStudent 2 Average: " << st2.average() << " Percentage: " << st2.percentage() << "%";
    cout << "\nStudent 3 Average: " << st3.average() << " Percentage: " << st3.percentage() << "%" << endl;

    return 0;
}
