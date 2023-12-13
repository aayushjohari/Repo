#include<iostream>
#include<fstream>
using namespace std;
/*
int main(){
    ofstream myfile("Hello.txt");
   
    int m,n;
    cout<<"enter the number"<<endl;
    cin>>m>>n;

    for(int i=m;i<=n;i++){
        for(i=1;i<=10;i++)
         myfile<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    myfile.close();
}
*/

int main(){
     ofstream myfile("Hello.txt");
    int m,n;
    cout<<"enter the no.s"<<endl;
    cin>>m>>n;
    

    for(int i=m;i<=n;i++){
        ofstream myfiles("hello" + to_string(i) + ".txt");
        for(int j=1;j<=10;j++){
            myfile<<m<<"*"<<j<<"="<<m*j<<endl;
        }m++;
         myfile<<endl;
          myfile.close();
    }
   
}
