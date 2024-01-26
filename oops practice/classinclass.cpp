#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    private:
    int score;
    int health;
    int age;
    bool alive;
    Gun gun;
    public:
    //setter
    void setScore(int s){ score = s; }
    void setHealth(int s){ health = s; }
    void setAge(int s){ age = s; }
    void setAlive(bool s){ alive = s; }
    void setGun(Gun gun){this->gun = gun; }
    //getter
    int  getHealth(){ return health; }
    int getScore(){ return score; }
    int getAge(){ return age; }
    bool getAlive(){ return alive; } 
    Gun getgun(){
        return gun;
    }
};
int main()
{
    Player ram;
    ram.setScore(13);
    ram.setHealth(134);
    cout<<ram.getScore();
    Gun akm;
    akm.ammo(100);
    akm.damage(50);
    akm.scope(2); 
    Player rom;
    rom.setScore(13);
    rom.setHealth(134);
    cout<<rom.getScore();
    rom.setGun(akm);
 return 0;
}