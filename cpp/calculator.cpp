#include<iostream>
using namespace std;

class Calculator{
public:
double addition(double a, double b){
   return a+b;
}
double subtraction(double a,double b){
    return a-b;
}
double multiplication(double a,double b){
    return a*b;
}
double division(double a,double b){
    return a/b;
}
};

int main(){
    Calculator C;

   // cout<<"Addition of Two Numbers = "<< C.addition(x,y)<<"\n";
    cout<<"Subtraction = "<< C.subtraction(9,8)<<"\n";
    cout<<"Divison="<< C.division(10,5)<<"\n";
    cout<<"Multiplication="<<C.multiplication(8,9)<<"\n";

}