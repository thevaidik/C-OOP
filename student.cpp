#include <iostream>
#include <vector>

using namespace std;

struct student
{
    int roll_no;
    char name[20];
};

void get_input(vector<student> &p1, int n1)
{
    for (int i = 0; i < n1; i++)
    {
        student s;
        cout << "Enter Roll Number: ";
        cin >> s.roll_no;
        cout << "\n Enter Name of the student: ";
        cin >> s.name;
        p1.push_back(s);
    }
}

int main()
{

    int n;
    cout << "How many student details would you want to enter: ";
    cin >> n;
    // Want to create number of object based on input n
    vector<student> p;
    get_input(p, n);

    return 0;
}
