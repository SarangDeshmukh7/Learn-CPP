#include <iostream>

using namespace std;
/*scope / range of varables */

int globalVariable;

main()
{
    int localVariable;
/*
    cout << "value of globalVariable: " << globalVariable << endl;
    cout << "value of localVariable: " << localVariable << endl;
*/
    int a = 10;
/*
    if (a == 10)
    {
        int result = a * 10;
    }



    cout << result << endl;*/

    int nr, result = 0;
    int i = 0;
    for (; i < 3; i++) // 3,2,3 - will the result be 8??? NOOOOOOOOO, we have to assign 0 to the result!
    {
        cout << "Enter " << (i + 1) << " number" << endl;
        cin >> nr;
        result += nr; //result = result + nr;
    }

    cout << result << endl;
    cout << "we added " << i << " numbers" << endl;
}
