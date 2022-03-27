// Sort-Vector-Student-CompareFunction.cpp

#include "Student.h"
#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include <string>
using namespace std;

// a compare function that is passed into the sort() function and used
// by the sort() to compare pairs of Student elements in the vector.
// It returns 'true' if the left is less than the right (for Ascending order),
// otherwise it returns 'false'.
bool compareAgeAscending(Student s1, Student s2)
{
    return (s1.getAge() < s2.getAge());   // true if s1 is before s2
}

// You must write code in a compare function that will compare two Student
// objects based on some field (or a combination of fields)
// e.g. say Student had cash and bank balance, and we wanted to sort by total
// worth, ascending. Then we would use something like this:
//
// bool compareBasedOnWorth(Student s1, Student s2)
// {
//    int s1Worth = s1.getCash() + s1.getBankBalance();
//    int s2Worth = s2.getCash() + s1.getBankBalance();
//    return ( s1Worth < s2Worth) ;
//}



void print(vector<Student>& vect)
{
    cout << "\nvector contains:\n";
    for (Student s : vect)
        cout << s.getName() << " " << s.getAge() << endl;
    cout << endl;;
}

int main()
{
    // create and populate a vector of Student objects.
    // Each vector element will store a Student object.
    vector<Student> studentVector = { {"Bob",20},{"Ali",19} };

    // vectors (like ArrayLists) can grow as elements are added
    studentVector.push_back( Student("Con",18));
    cout << "Original vector:" << endl;
    print(studentVector);

    // Passing the address of a compare function ( "Function Pointer" ) into a sort() function
    // to allow the sort() to compare pairs of Student objects.
    // We supply the name of the compare function.
    // When we use the name of a function as an argument,
    // it is (treated) as a function pointer.
    //
    // (The name of the compare function is the address of that function, so,
    // the sort() function gets access to the compare function via the pointer).

    // The sort function also requires arguments identifying the start and the
    // end of the vector. (A vector uses an array to store its elements)

    sort(studentVector.begin(), studentVector.end(), compareAgeAscending);

    cout << "Sorted vector - by age, ascending" << endl;
    print(studentVector);

    return 0;
}