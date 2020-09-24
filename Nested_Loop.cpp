#include <iostream>

using namespace std;
/* loops - exercises and nested loops */

main()
{
    /*
        1 2 3 4 5  6  7  8  9  10
        2 4 6 8 10 12 14 16 18 20
        3 6 9 12 15 ....
        4 ...
        5 ...
    */

    for (int i = 1; i <= 15; i++) // i = 2
    {
      /*  if (i==5)
             continue; // will remove the 5th row and everything will be executed
      */
        
        for (int j = 1; j <= 12; j++) // j = 1
        {
       /*     if (j==5)
                break; // will remove the 5th coloumn
        */
        cout.width(4);
            cout << i * j;
        }


        cout << endl;
    }




}
