#include <iostream>
#include <cstring> // Include this for string operations like strcpy

class student {
private:
    int score;
    char name[100];
    int age;

public:
    // Setter method for the 'score' member
    void setScore(int score) {
        this->score = score;
    }

    // Getter method for the 'score' member
    int getScore() {
        return score;
    }
};

int main() {
    student s; // Create an instance of the student class

    s.setScore(85); // Set the score using the setter method

    // Access and print the score using the getter method
    std::cout << "Student's Score: " << s.getScore() << std::endl;

    return 0;
}
