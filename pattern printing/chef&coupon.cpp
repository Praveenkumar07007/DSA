#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a1,a2,a3,b1,b2,b3,d,c,day2,day1,total1,total2;
	    cin>>d>>c;
	    cin>>a1>>a2>>a3;
	    cin>>b1>>b2>>b3;
	    day1=a1+a2+a2;
	    day2=b1+b2+b3;
	    total1=day1+day2+d;
	    if(day1>=150){
	        day1=day1+c-d;
	    }
	    if(day2>=150){
	        day2=day2+c-d;
	    }
	    total2=day1+day2;
	    if(total2<total1){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
