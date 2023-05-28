#include <iostream>
using namespace std;

class Student {
   public:
   string name;
   int rollno;

   Student() {}

   Student(string x, int y) {
      name = x;
      rollno = y;
   }

   void printDetails() {
      cout << rollno << " - " << name << endl;
   }
};

int main() {
   //declare array with specific size
   Student students[5];
   
   //assign objects
   students[0] = Student("Ram", 5);
   students[1] = Student("Alex", 1);
   students[2] = Student("Lesha", 4);
   students[3] = Student("Emily", 3);
   students[4] = Student("Anita", 2);

   for(int i=0; i < 5; i++) {
      students[i].printDetails();
   }
}
