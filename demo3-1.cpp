#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name; 
    int ID;
    double grade;
};

void print_student(Student a) {
    cout << a.name << "  " << a.ID << "  " << a.grade << endl;
}

void print_student_ptr(Student *p) {
    cout << p -> name << "  " << p -> ID << p -> grade << endl;
}

int main() {
    Student s1; 
    Student *ps;

    s1.name = "Jess";
    s1.ID = 12345;
    s1.grade = 82.2;

    ps = &s1;

    print_student(*ps);
    return 0;
}