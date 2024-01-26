#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    public:
    //setter
    void setScore(int s){ score = s; }
    void setHealth(int s){ health = s; }
    //getter
    int  getHealth(){ return health; }
    int getScore(){ return score; }

};
int main()
{
    Player ram;
    ram.setScore(13);
    ram.setHealth(134);
    cout<<ram.getScore();
 return 0;
}