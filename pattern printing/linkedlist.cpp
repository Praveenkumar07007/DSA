#include<iostream>
using namespace std;
class Box{
	private:
	static int length;
	static int breadth;
	static int height;
	public:
	static void print(){
		cout << "the vlaue of the length: " << length << endl;
		cout << "the breadth: " << breadth << endl;
		cout << "the height: " << height << endl;
	}
	int Box::length=10;
	int Box::breadth=20;
	int Box::height=30;
};
int main(){
	Box b;
	cout<<
}