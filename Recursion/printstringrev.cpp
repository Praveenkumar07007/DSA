#include<iostream>
using namespace std;

void printstringrev(string s){
  if(s.length()==0) return;
  string ros = s.substr(1);
  printstringrev(ros);
  cout<<s[0];
}

int main(){
  printstringrev("hello");
  return 0;
}
