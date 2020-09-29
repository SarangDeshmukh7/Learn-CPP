#include <iostream>

using namespace std;
//ARRAYS
main()
{
    int a;

    //int a,b,c,d,e,f,g,h,i,j;

    //int var1,var2,var3,var4,var5...
    int x[100];
    int array[4]; //TYPE NAME[SIZE_NR_OF_ELEMENTS];

    array[0] = 10;
    array[1] = 50;
    array[2] = 256;
    array[3] = 512;
    //array[4] = 125125; we can't do it

    /*
        0 1 2 3 4 5 6 7 8 9 a b c d e f

        1 2 a = 1 * 16 ^ 2 + 2 * 16 ^ 1 + a * 16 ^ 0 = 256 + 32 + 10 = 298
    */

    cout << "array [0] = " << array[0] << ", address: " << &array[0] << endl;
    cout << "array [1] = " << array[1] << ", address: " << &array[1] <<  endl;
    cout << "array [2] = " << array[2] << ", address: " << &array[2] <<  endl;
    cout << "array [3] = " << array[3] << ", address: " << &array[3] <<  endl;

    cout << "array [0] = " << array[0] << ", address: " << array << endl;

    if (&array[0] == array)
        cout << "thats true";
}
