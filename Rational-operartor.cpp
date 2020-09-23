#include <iostream>

using namespace std;
//relational operator.
main()
{
    int a = 10;
    int b = 5;


    cout << (a == b) << endl; //true (1) when both variables have the same value
    cout << (a != b) << endl; //true (1) when both variables DO NOT have the same value
    cout << (a > b) << endl; //true (1) when value of variable a is greater than value of variable b
    cout << (a < b) << endl; //true (1) when value of variable b is greater than value of variable a
    cout << (a >= b) << endl; //true (1) when value of variable a is greater than or equal to value of variable b
    cout << (a <= b) << endl; //true (1) when value of variable b is greater than or equal to value of variable a

    cout << !(a == b) << endl; //(a != b)
}
