#include<iostream>
#include<string>

using namespace std;
struct student{

    int roll;
    string name;
    string dept;
};
int main(int argc, char const *argv[])
{
    struct student sust;
    cout << "Enter roll: ";
    cin >> sust.roll;
    cout << "Successfully inserted." << endl << "Please enter name: ";
    cin >> sust.name;
    cout << "Successfully inserted." << endl << "Please enter Dept: ";
    cin >> sust.dept;
    cout << endl;
    cout << "Name: " << sust.name << endl;
    cout << "Department: " << sust.dept << endl;
    cout << "Roll: " << sust.roll << endl;    
    return 0;
}
