#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream out;
    // out.open("input.txt");
    // int t;
    // cin >> t;
    // out<<t<<"\n";
    // while(t-->0){
    //     int n;
    //     cin >> n;
    //     out<<n<<"\n";
    // } 
    ifstream in;
    in.open("input.txt");
    if(in.is_open())
        cout<<"trun";
    ofstream out;
    out.open("output.txt",ios::trunc);
    int t;
    in>>t;
    out<<t<<"\n";
    while(t-->0){
        int n;
        in>>n;
        out<<100*n<<"\n";
    }
 return 0;
}