#include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;
    Bike(int tyreSize,int engineSize){
        this->tyreSize =tyreSize;
        this->engineSize =engineSize;
    }
    ~Bike(){
        cout<<"distructor called"<<endl;
    }
};
int main(){
    cout <<"Namaste folks!"<<endl;
    Bike tvs(10,100);
    bool flag = false;
    if(flag==false){
            Bike royal(20,150);
    Bike pulsar(40,350); 
    }
    cout<<tvs.tyreSize<<endl;
    cout<<tvs.engineSize<<endl;
    return 0;
}