#include <iostream>
using namespace std;
int* function()
{
    int *a = new int(5);
    return a;
}

void caller()
{
    int *b = function();
    delete b;
}

// This code creates
//  a function called "function" that dynamically allocates an integer
//  with the value of 5 and returns a pointer to that integer. The function "caller" calls "function"
//  and assigns the returned pointer to a variable "b". Then, "caller" deletes the memory pointed to by "b".
//
// There is a potential memory leak in this code if the caller
//  does not remember to delete the pointer returned by "function".
//  Additionally, if the caller tries to access the memory pointed to by "b" after it has been deleted,
//  it will result in undefined behavior.
//  Created by Vaidik  on 30/04/23.
//
