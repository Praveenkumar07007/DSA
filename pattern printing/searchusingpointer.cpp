#include<iostream>
using namespace std;
void findfirstlast(string s ,char ch ,int *first, int*last){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *first = i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==ch){
            *last = i;
            break;
        }
}
}
int main(){
    string str="praveen";
    int first =-1;
    int last =-1;
    char ch ='e';
    int *pf=&first;
    int *pl=&last;
    findfirstlast(str,ch,pf,pl);
    cout<<"first: "<<first<<" last: "<<last<<endl;
    cout<<"first: "<<*pf<<"last: "<<*pl<<endl;
}