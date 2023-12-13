#include<iostream>
using namespace std;

class Rectangle{

    double length,breadth;

    public:

    void setDimensions(double length,double breadth){
       this->length=length;
       this->breadth=breadth;
    }

    void showDimensions(){
        cout<<"Length : "<<length<<endl;
        cout<<" Breadth : "<<breadth<<endl;
    }

  void showPerimeter(){
   cout<<"the perimeter of rectangle: "<<2*length+breadth<<endl;
  }

  void showArea(){
    cout<<"the area of rectangle: "<<length*breadth<<endl;
  }

  void detailsofRectangle(){
    cout<<"Details of rectangle are : "<<endl<<"the length of rectangle: "<<length<<"\n"<<"the breadth of rectangle: "<<breadth<<"\n"<<"Therefore the perimeter of rectangle= "<<2*length+breadth<<"\n"<<"and the area of rectangle= "<<length*breadth<<endl;
  }

};

int main()
{
    Rectangle r;
    int x,y;
    cout<<"Enter the length: ";
    cin>>x;
    cout<<"Enter the breadth: ";
    cin>>y;

    r.setDimensions(x,y);
    r.showDimensions();
    r.showPerimeter();
    r.showArea();
    r.detailsofRectangle();


}