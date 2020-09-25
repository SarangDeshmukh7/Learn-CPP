#include <iostream>

using namespace std;
/* dynamic allocation of memory */

int main()
{
   // int var = 41240;
   /*
    int amount;

    cout << "How many numbers would you like to store in an array? " << endl;
    cin >> amount;

    int *p = new (nothrow) int[amount];

    if (p != NULL)
    {
        for (int i = 0; i < amount; i++)
        {
            cout << "Enter the " << (i+1) << " number: " << endl;
            cin >> p[i];
        }

        for (int i = 0; i < amount; i++)
        {
            cout << "p [ " << i << " ] =  " << p[i] << endl;
        }
    }
    else
        cout << "Not enough memory " << endl;
        */


    {
        int *p = new int;

        cout << p << endl;

        delete p;

        p = new int;

        cout << p << endl;

        delete p;
    }


    //cout << "var: " << var << endl;


    //delete []p;
    return 0;
}
