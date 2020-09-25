#include <iostream>

using namespace std;
/* POINTERS ARE ordinary variables that can store addresses of variables */
int main()
{
    int var = 5;
    int a = 20;

    cout << *&var << endl;

    int * const p = &var; //this asterisk (datatype*) here is just used to INFORM about that this variable is a POINTER so it is a variable that can point to address of another variable

   // p = &var;

    cout << *p << endl; //this astrisk(without datatype *) here is used to RETRIEVE (GET) value FROM indicated (pointed) area in our memory (address)

    //*p = 20;
//    var = 60;
    *p = 60;
    cout << "var: " << var << endl;
    cout << "*p: "<< *p << endl;
    cout << "a: "<< a << endl;

    int * const p_const = &a; //this is a pointer that has to be initialized when defined, because it cannot change after defining the thing that it is pointing to (address)

    const int * p_2 = &a; //this is a pointer that cannot change the value that is under address its pointing to.

    const int * const p_3 = &a; //this is a pointer that cannot change the value that is under address its pointing to and also it cant change the address

    cout << endl << endl << endl;

    int ordinary_var = 10;

    int *ordinary_p = &ordinary_var;

    cout << "ordinary_var: " << ordinary_var << endl; //integer value
    cout << "&ordinary_var: " << &ordinary_var << endl; //integer value
    cout << "ordinary_p: " << ordinary_p << endl; //address
    cout << "*ordinary_p: " << *ordinary_p << endl; //integer value from pointed place (ordinary_var)
    cout << "&ordinary_p: " << &ordinary_p << endl; //address of pointer itself

    int ** p_pointing_to_address_of_pointer = &ordinary_p;

    cout << "p_pointing_to_address_of_pointer: " << p_pointing_to_address_of_pointer << endl;

    return 0;
}
