#include<iostream>
using namespace std;
class vechile{
    int speed; 
};
class Bike:public vechile{
public:
    int tyreSize;
    int engineSize;
   void add(int a,int b){
    
} Bike(int tyreSize,int engineSize=200){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }
};
void add(int a,int b){
cout<<a+b<<endl;
}

void add(int a){
    cout<<10+a<<endl;
}
int main()
{
    Bike royalEnfield(15,350);
    Bike bajaj(13);
    cout<<royalEnfield.tyreSize <<" "<<royalEnfield.engineSize<< endl;
    cout<<bajaj.tyreSize <<" "<<bajaj.engineSize<<endl;
     add(1,3);
     add(3);

 return 0;
}