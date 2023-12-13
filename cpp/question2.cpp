#include<iostream>
using namespace std;
/*
class Point{
    int x;
    int y;
    public:
        Point(){
            x=0;
            y=0;{
                cout<<"This is default constructor"<<endl;
            }
        }
        Point(int x, int y){
            this->x=x;
            this->y=y;{
                cout<<"This is parameterize constructor"<<endl;
                cout<<"the value of x="<<x<<" & "<<"the value of y="<<y<<endl;
            }
        }
};
int main(){
    Point p;
    Point p2(5,10);
}
*/
/*
class Student{
    string name;
    int rollNo ;
    int age ;
    public:
    Student(){
        name="unknown";
        rollNo=0;
        age=0;
        cout<<"this is default constructor where initializing value =0 "<<endl;
    }
    Student(string name,int rollNo,int age){
        this->name=name;
        this->rollNo=rollNo;
        this->age=age;{
            cout<<"Now this is parameterize constructor"<<endl;
        }
    }
    void details(){
        cout<<"The name of Student ="<<name<<endl;
        cout<<"The rollNo of Student ="<<rollNo<<endl;
        cout<<"The age of student ="<<age<<endl;
    }
};

int main(){
    Student s1;
    Student s2("Aayush",01,20);
    s2.details();
}
*/
/*
class Rectangle{
    double length;
    double breadth;
    public:
        Rectangle(){
            length=0;
            breadth=0;
        }
        Rectangle(double length,double breadth){
            this->length=length;
            this->breadth=breadth;{
                cout<<"length="<<length<<" & "<<"breadth="<<breadth<<endl;
            }
        }
        double area(){
            return length*breadth;
        }
};

int main(){
    Rectangle r(4.5,6.5);
    cout<<"the area of rectangle ="<<r.area()<<endl;

}
*/
/*
class Circle{
    double radius;
    public:
        Circle(){
            radius=0;{
                cout<<"this is default constructor where initialization to value=0"<<endl;
            }
        }
        Circle(double radius){
            this->radius=radius;{
                cout<<"radius="<<radius<<endl;
            }
        }
        double circumference(){
            return 2*3.14*radius;
        }
};

int main(){
    Circle c;
    Circle c2(3.5);
    cout<<"the circumference of circle ="<<c2.circumference()<<endl;
    }
    */
 /*
   class BankAccount{
    long int accountNumber;
    string name;
    double balance;
    public:
          BankAccount(){
            accountNumber=0;
            name="";
            balance=0.00;
          }
          BankAccount( long int accountNumber,string name,double balance){
             this->accountNumber=accountNumber;
             this->name=name;
             this->balance=balance;
          }
          double deposit(double x){
            return balance +=x;
          }
          double withdrawal(double y){
            if(y<=balance)
            return balance -= y;
          else{
            cout<<"Insufficient balance \n"<<endl;
          }
        }
        void details(){
            cout<<"the name of account holder :"<<name<<endl;
            cout<<"the balance ="<<balance<<endl;
        } 
   };
   int main(){
    BankAccount b(2348871,"Aayush Johari",45000);
    b.details();
    cout<<"the amount after deposition ="<<b.deposit(5000)<<endl;
    cout<<"the amount after withdrawal="<<b.withdrawal(2000)<<endl;
   }
*/

class Employee{
    string name;
    int salary;
    string department;
    public:
         Employee(){
            name ="unknown" ;
            salary =0;
            department="";
            cout<<"this is default constructor where we initialise the value =0"<<endl;
         }
         Employee(string name, int salary, string department){
           this->name=name;
           this->salary=salary;
           this->department=department;{
           cout<<"this is parametrise constructor"<<endl;
           cout<<"the name of employee: "<<name<<endl;
           cout<<"the salary of employee= "<<salary<<endl;
           cout<<"the department of employee is "<<department<<endl;
         }
     }
      double AnnualIncome(){
            return 12*salary;
   }
};
int main(){

    Employee e;
    Employee e2("Aayush johari",45000,"software developer");
    cout<<"the annual income of the employee is :"<<e2.AnnualIncome()<<endl;
}