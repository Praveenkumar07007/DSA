#include<iostream>
using namespace std;
class Student{//user defined data type
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void change(Student &s){
    s.name="raghav";
}
int main()
{
    Student* s =new Student("praveen kumar",73,8.3);
    // s.name="praveen kumar";
    // s.rno = 76;
    // s.marks=8.3;
    s.name = "praveen kr";
    change(s);
     cout << s.name << endl;

 return 0;
}