#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="raghav";
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<count<<endl;
 return 0;
}