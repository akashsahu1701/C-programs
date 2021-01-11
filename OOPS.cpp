#include "bits/stdc++.h"
#include <string>
using namespace std;

class student
{
    string name;
    int age;
    string gender;

public:
    void setname(string tempName)
    {
        name = tempName;
    }
    void setage(int tempAge)
    {
        age = tempAge;
    }
    void setgender(string tempGender)
    {
        gender = tempGender;
    }
    void printInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
    // default constructor;
    // Student()
    // {
    //     cout << "default constructor \n";
    // }
    // Student(string a, int b, string c)
    // {
    //     cout << "parameter constructor \n";
    //     name = a;
    //     age = b;
    //     gender = c;
    // }
};

int main()
{
    string name;
    int age;
    string gender;
    student stud[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> name;
        stud[i].setname(name);
        cin >> age;
        stud[i].setage(age);
        cin >> gender;
        stud[i].setgender(gender);
    }
    for (int i = 0; i < 3; i++)
    {
        stud[i].printInfo();
    }

    return 0;
}