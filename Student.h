//
// C++ March 2022
//

#ifndef VECTOR_OF_STUDENT_OBJECTS_SORT_STUDENT_H
#define VECTOR_OF_STUDENT_OBJECTS_SORT_STUDENT_H

#include <string>

// don't use "using namespace std" in header files

class Student
{
private:
    std::string name;
    int age;

public:
    Student(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    ~Student() {}   // destructor

    std::string getName() { return name; }

    int getAge() { return age; }
};


#endif //VECTOR_OF_STUDENT_OBJECTS_SORT_STUDENT_H
