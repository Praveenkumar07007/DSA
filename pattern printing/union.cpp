#include <iostream>
using namespace std;
class fruit{
public:
	string name;
	int price;
	string color;
};
int main(){
	fruit apple;
	apple.name = "Apple";
	apple.price =80;
	apple.color ="red";
	cout<<apple.name<<apple.price<<endl;
}
