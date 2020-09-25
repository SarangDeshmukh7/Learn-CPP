#include <iostream>

using namespace std;
void fun(int *ptr);
main()
{
int a = 10;
fun(&a);
cout<<a;
}

void fun(int *ptr)
{
*ptr = *ptr + 10;
}
