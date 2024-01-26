#include<iostream>
#include<vector>
using namespace std;
int maximumonerow(vector<vector<int> >&v){
    int maxones=INT16_MIN;
    int maxonesrow=-1;
    int colunms=v[0].size();
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            if(v[i][j]==1){
                int numberofones=colunms-j;
                if(numberofones>maxones){
                    maxones=numberofones;
                    maxones=i;
                }
                break;
            }
        }
    }   
    return maxones; 
}
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int> >vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> vec[i][j];
    }
    }
    int res=maximumonerow(vec);
    cout<<res<<endl;
 retur

 There were many people who used to drive car with time ear phone and without
helmet. In this photo, Raushan Sir, who was the head of my organization, was staying with us, explaining in front of the public with folded hands,saluting and begging. 