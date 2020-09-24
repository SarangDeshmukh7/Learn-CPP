#include <iostream>

using namespace std;
/*functions / methods */
//parameter
void welcome(); //declaration of function, procedure
bool isNumber(string);
void enterName();
double add(double a, double b) {return a + b;}
void changeValueTo10(int a)
{
  a = 10;
}
int main()
{
   // welcome();
   /* enterName();
    enterName();
    enterName();*/
    char ch;
    cout << "Do you want to end the program? (Y/N)" << endl;

    cin >> ch;
    if (ch == 'Y' || ch == 'y')
    return 0;
   // cout << add(4,5);
    int a = 5;

    changeValueTo10(a);

    cout << a;

    return 0;
}

void welcome()
{
    cout << "HEllo, welcome in my program!! :-)" << endl;
}
bool isNumber(string tmp)
{
    if (tmp[0] == '0')
        return false;
    for (int i = 0; i < tmp.length(); i++)
    {
        if (!(tmp[i] >= 48 && tmp[i] <= 57))
            return false;
    }

    return true;
}
void enterName()
{
    string tmp;

    cout << "Enter the number: " << endl;
    cin >> tmp; //124

    if (isNumber(tmp))
        cout << "Number entered properly " << endl;
    else
        cout << "Number wasn't entered properly " << endl;
}
