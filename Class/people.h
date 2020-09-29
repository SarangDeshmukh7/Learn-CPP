#ifndef PEOPLE_H_INCLUDED
#define PEOPLE_H_INCLUDED

class PersonalData
{
    private:
        short age;
        int *p;
    public:
        PersonalData();
        PersonalData(short);
        ~PersonalData();
        /**
            This function is setting age. If age is lower than 0, then age = 10.
        */
        void setAge(int);
        short getAge() {return age;}
};

#endif // PEOPLE_H_INCLUDED
