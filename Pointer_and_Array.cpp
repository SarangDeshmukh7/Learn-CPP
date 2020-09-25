#include <iostream>

using namespace std;
main()
{
int a[5] = {10,20,30,40,50};
int *ptr = &a[0]; // or * ptr = a;

cout << *ptr <<endl;
ptr = ptr + 2;
cout << *ptr << endl;
}
