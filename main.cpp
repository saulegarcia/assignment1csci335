// I don't know what I'm doing, but I will try my best to finish this
#include <Points2D.h>
#include <iostream>
#include <array>
#include <string>
using namespace std;
using namespace teaching_project;

points2D(const Point2D &rhs)
{
    sequence_ = rhs.sequence_;
    size_ = rhs.size_;
}
void TestPart1() {
 Points2D<int> a, b; // Two empty Points2D are created.
 cout << a.size() << " " << b.size() << endl; // yields 0 0.
 const array<int, 2> a_point2{{7, 10}};
 Points2D<int> d{a_point2}; // Sequence (7, 10) should be created.
 cout << d; // Should just print (7, 10)
 cout << "Enter a sequence of points (integer)" << endl;
 a.ReadPoints2D(); // User enters a set of points in the form:
 // 3 7 4 3 2 1 10
// 3 specifies number of points. Points are the pairs
// (7, 4) (3, 2) and (1, 10)
 cout << "Output1: " << endl;
 cout << a; // Output should be what user entered.
 cout << "Enter a sequence of points (integer)" << endl;
 b.ReadPoints2D(); // Enter another sequence.
 cout << "Output2: " << endl;
 cout << b;
 Points2D<int> c{a}; // Calls copy constructor for c.
 cout << "After copy constructor1 c{a}: " << endl;
 cout << c;
 cout << a;
 a = b; // Should call the copy assignment operator for a.
 cout << "After assignment a = b" << endl;
 cout << a;
 Points2D<int> e = move(c); // Move constructor for d.
 cout << "After e = move(c) " << endl;
 cout << e;
 cout << c;
 cout << "After a = move(e) " << endl;
 a = move(e); // Move assignment operator for a.
 cout << a;
 cout << e;
} 
int main() {
  std::cout << "Hello World!\n";
}
