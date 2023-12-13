#include<iostream>
using namespace std;

class Rhombus{
    double diagonal1,diagonal2;

    public:


    Rhombus(){
     diagonal1=0;
       diagonal2=0;

       cout<<" this is constructor 1"<<endl;
    }
   Rhombus(double diagonal1,double diagonal2 ){
      this->diagonal1=diagonal1;
      this->diagonal2=diagonal2;

       
   }

   Rhombus(int a,int b){
    
   }

   void areaRhombus(){
     cout<<"area="<<(diagonal1*diagonal2)/2<<endl;
   }
};

int main(){
    Rhombus r(7,5);
    r.areaRhombus();
}