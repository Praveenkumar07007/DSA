#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str="raghav is a maths teacher";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
 return 0;
}