#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    int age;
    bool alive;
    public:
    //setter
    void setScore(int s){ score = s; }
    void setHealth(int s){ health = s; }
    void setAge(int s){ age = s; }
    void setAlive(bool s){ alive = s; }
    //getter
    int  getHealth(){ return health; }
    int getScore(){ return score; }
    int getAge(){ return age; }
    bool getAlive(){ return alive; } 

};
int main()
{
    Player ram;
    ram.setScore(13);
    ram.setHealth(134);
    cout<<ram.getScore();
 return 0;
}