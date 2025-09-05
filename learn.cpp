#include <iostream>

int main(){
    int age;
    std::string name;
    bool isStudent;
    double gpa;


    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Are you a student (1 for yes, 0 for no): ";
    std::cin >> isStudent;

    std::cout << "Enter your GPA: ";
    std::cin >> gpa;

    if (isStudent) {
        std::cout << "Hello " << name << ", as a student with a GPA of " << gpa << ", you are eligible for student discounts!" << std::endl;
    } else {
        std::cout << "Hello " << name << ", as a non-student, you might not be eligible for student discounts." << std::endl;
    }

    return 0;
}