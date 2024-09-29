#include <bits/stdc++.h>
using namespace std;
#include<string.h>
void subsequence(string str,int idx , string newString,vector<string>& v){
    if(idx==str.length()){
        v.push_back(newString);
        return;
    }
    char currChar = str[idx];
    //to be
    subsequence(str,idx+1,newString+currChar,v);
    //not to be
    subsequence(str,idx+1,newString,v);
}

int main() {
	// your code goes here
	string str = "abc";
	vector<string>v;
	subsequence(str,0,"",v);
	for(string ele:v){
	    cout<<ele<<endl;
	}

}
