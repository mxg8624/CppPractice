#ifndef NPC_H
#define NPC_H
#include <iostream>

class NPC
{
    public:
        std::string nName;
        int hp;
        int px,py;
    int main(int argc,const char * argv[]);
    void move(int x,int y);
    void fire(int x,int y);

};

#endif // NPC_H
