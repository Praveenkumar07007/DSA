#include<iostream>
using namespace std;
class student{
    private:
    char name[100];
    char section[10];
    int reg_No;
    int cgpa;
    public:
    void setname(char name[100]){
        cin.getline(name,100);
        this->name = name;
    }
    void setsection(char section[10]){
        cin>>section;
        this->section = section;
    }
    void setreg_No(int reg_No){
        cin>>reg_No;
        this->reg_No = reg_No;
    }
    
};
int main()
{

 return 0;
}
