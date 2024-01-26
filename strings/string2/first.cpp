 #include<iostream>
 #include<string>
 #include<algorithm>
 using namespace std;
 int main()
 {
    string str;
    int count = 0;
    getline(cin, str);
    int n = str.size();
    for(int i = 0; i <str.size(); i++){
        if(n==1){
            break;
        }
        if(i==0){
            if(str[i]!=str[i+1]) count++;
        else if(i==n-1){
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
        count++;
        }
    }
    cout << count << endl;
  return 0;
 }
 }