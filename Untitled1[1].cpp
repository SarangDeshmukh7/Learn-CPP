#include <iostream>

using namespace std;
/* DATA STRUCTURES */

struct personalData
{
    string name;
    string surname;
    string telephoneNumber;
    short age;
}a,b;
void test(personalData *);
int main()
{
    personalData person[5];
    a.age =50;

   // cout << a.age << endl;
    person[0].name = "Arkadiusz";
    person[1].name = "Wiola";
    person[0].surname = "Wlodarczyk";
    person[0].telephoneNumber = "606102340";
    person[0].age = 22;
/*
    cout << person[0].name << endl;
    cout << person[0].surname << endl;
    cout << person[0].telephoneNumber << endl;
    cout << person[0].age << endl;
*/
/*
    cout << (*person).name << endl;
    cout << (*&person[0]).name << endl;
    cout << (person+1)->name << endl;
*/
    personalData *p = person;

    cout << p->name << endl;

    test(p); // test(person);

    cout << p->name << endl;
    return 0;
}
void test(personalData *person)
{
    person->name = "Agnes";
}
