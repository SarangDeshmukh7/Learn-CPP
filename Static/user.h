#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

class User
{
        int ID;
        static int counter;
    public:
        User();
        ~User();
        int getID() { return ID; }
        static int getCounter() { return counter; }
};

#endif // USER_H_INCLUDED
