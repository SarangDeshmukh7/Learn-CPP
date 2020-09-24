#include <iostream>

using namespace std;

/* overloading functions */
int power(int, int);
double power(double, int);
int main()
{

    cout << power(2, 6) << endl;

    return 0;
}

/*
    2 ^ 3 = 2 * 2 * 2

    2 ^ 1 = 2
    2 ^ 2 = 4
    2 ^ 3 = 8
*/
int power(int b, int e) // b = 8, e = 1
{
    int tmp = b; //tmp = 2
    int i = 0;

    while(i++ < e)
    {
        cout << tmp << " ^ " << i << " = " << b << endl;
        if (i != e)
            b *= tmp; //b = b * tmp;
    }

    return b;
}
double power(double b, int e)
{
    double tmp = b; //tmp = 2
    while(e-- > 1)
        b *= tmp; //b = b * tmp;

    return b;
}
