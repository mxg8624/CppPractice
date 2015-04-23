#include "NPC.h"
#include <iostream>

int main(int argc,const char * argv[])
{
    NPC n1;
    n1.hp=100;
    std::cout<<n1.hp<<std::endl;
    n1.nName = "frost";
    n1.px=100;
    n1.py=100;
    n1.move(30,30);
    n1.fire(50,50);
    NPC * npc2;
    npc2 = new NPC();
}

void NPC::move(int x,int y)
{
    std::cout<<this->nName<<" move to "<<x<<y<<std::endl;
    this->px=x;
    this->py=y;
}
void NPC::fire(int x,int y)
{
    std::cout<<this->nName<<" fire "<<x<<y<<std::endl;
}
