#ifndef POSITION_H_INCLUDED
#define POSITION_H_INCLUDED

class Position
{
    int x, y;
    public:
        Position(int,int);
        ~Position();
        void getPosition() const;
        void setPosition(int, int);
};

#endif // POSITION_H_INCLUDED
