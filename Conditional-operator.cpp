#include <iostream>

using namespace std;

main()
{
    int a = 10;
    int b = 20;
    // CONDITION ? so instruction that will be executed if condition is true : if condition is not true;
    string message = (a > b) ? "a > b" : "a <= b";

    cout << ((a > b ? a : b) + 10)<< endl;

}
