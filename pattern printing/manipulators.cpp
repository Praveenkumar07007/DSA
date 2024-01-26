#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
    int age =22,roll_no=910;
    cout<<setfill('#');
    cout<<setw(4)<<age<<setw(6)<<roll_no<<endl;
    cout<<setw(6)<<age<<setw(8)<<roll_no<<endl;
    double f=3.14159;
    cout<<setprecision(5)<<f<<endl;
    cout<<setprecision(1)<<f<<endl;
    cout<<fixed;
    cout<<setprecision(3)<<f<<endl;
    cout<<setprecision(5)<<f<<endl;
 return 0;
}