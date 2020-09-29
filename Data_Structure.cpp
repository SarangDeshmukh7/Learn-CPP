#include <iostream>

using namespace std;
/* DATA STRUCTURES */

struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;
};
int main()
{
    personalData person;
   

    person.name = "Arkadiusz";
    person.name = "Wiola";
    person.surname = "Wlodarczyk";
    person.telephoneNumber = "606102340";
    person.age = 22;

    cout << person.name << endl;
    cout << person.surname << endl;
    cout << person.telephoneNumber << endl;
    cout << person.age << endl;


}
