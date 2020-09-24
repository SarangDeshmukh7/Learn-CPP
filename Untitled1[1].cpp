#include <iostream>

using namespace std;
/* loops - exercises and nested loops */

main()
{
   /* int nr = 1234; // 4 digits
    int nrOfDigits = 1;

    cout << 1234 / 10 << endl;
    cout << 123 / 10 << endl;
    cout << 12 / 10 << endl;
    cout << 1 / 10 << endl;

    int tmp = nr;
    while (tmp /= 10) //tmp = 0, nrOfDigits = 4
        nrOfDigits++;

    cout << "the number " << nr << " has " << nrOfDigits << " digits" << endl;
*/
    /*
        1 2 3 4 5  6  7  8  9  10
        2 4 6 8 10 12 14 16 18 20
        3 6 9 12 15 ....
        4 ...
        5 ...
    */

    for (int i = 1; i <= 15; i++) // i = 2
    {
        for (int j = 1; j <= 12; j++) // j = 1
        {
            cout.width(4);
            cout << i * j;
        }


        cout << endl;
    }




}
