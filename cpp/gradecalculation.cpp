#include <iostream>
using namespace std;

class Student
{
   string name;
   int rollNumber;
   double Maths, DSA, OOPS, DE, SE;

public:
   double setMarks(double Maths, double DSA, double OOPS, double DE, double SE, string name, int rollNumber)
   {

      this->name = name;
      this->rollNumber = rollNumber;
      this->Maths = Maths;
      this->DSA = DSA;
      this->OOPS = OOPS;
      this->DE = DE;
      this->SE = SE;
   }

   double total()
   {
      return Maths + DSA + OOPS + DE + SE;
   }
   double percentage()
   {
      return ((Maths + DSA + OOPS + DE + SE) / 500) * 100;
   }
};
int main()
{
   string name;
   int rollNo;

   cout << "Enter the Name of Student \n ";
   getline(cin , name);

   cout << "Enter Roll Number of Student \n";
   cin >> rollNo;

   Student S;
   int a, b, c, d, e;
   cout << "Enter the marks:" << endl;
   cin >> a >> b >> c >> d >> e;

   S.setMarks(a, b, c, d, e, name, rollNo);
   cout << "Total Marks of Student =" << S.total() << endl;
   cout << "Percentage of Student = " << S.percentage() << endl;
}
