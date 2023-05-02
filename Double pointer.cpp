
#include <iostream>
using namespace std;
int main()
{
    char *tmp = new char;
    *tmp = 'Y';
    cout << "Value of pointer before calling func(): " << (*tmp) << endl;
    void func(char *char_ptr);

    func(tmp);
    return 0;
}



void func(char *char_ptr) {
    double* d_ptr = (double*) char_ptr;
    (*d_ptr) = 5.0;
    cout << "Value of pointer after cast in func(): " << *d_ptr << endl;
}
//
// Created by Vaidik Dubey on 28/04/23.
//
