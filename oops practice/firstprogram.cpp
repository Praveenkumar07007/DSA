#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    int health;
    void showHealth(){
        cout<<"health: "<<health<<endl;
    }
    void showScore(){
        cout<<"score: "<<score<<endl;
    }

};
int main()
{
    Player ram;
    ram.score = 10;
    ram.health =20;
    ram.showHealth();
 return 0;
}