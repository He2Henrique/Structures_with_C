#include <stdio.h>
#include <stdlib.h>

// in this file we will define the structures that we will use in the program

//explain srucures
// a structure is a collection of variables of different data types under a single name.
//difine a strucure like this...
struct simple_structure {
    int a; // integer variable
    float b; // float variable
    char c; // character variable
};

int main(){
    // this is a simple structure with three variables of different types
    // is like a block of memory that stores the values of different types
    // and we can access them using the name of the structure and the name of the variable
    // for example, we can create a variable of this structure like this:
    struct simple_structure my_structure;
    // and we can access the variables like this:
    my_structure.a = 10; // assign a value to the integer variable

    // we can declare a structure and assign values to it in the same line like this:
    struct simple_structure my_structure2 = {20, 3.14, 'c'}; // assign values to the structure

    // we can access the variables like this:
    printf("my_structure.a = %d\n", my_structure.a); // print the value of the integer variable

    //the other way to declare a structure is like this:
    typedef struct simple_structure2 { // this is a new structure
        int a; // integer variable
        float b; // float variable
        char c; // character variable
        struct simple_structure2 *next; // pointer to the next structure
    } my_structure3; // this is the name of the structure
    // is like a naming the structure and the variable at the same time.
    // structures is like a template that we can use to create variables of the same type.

    return 0;

}
