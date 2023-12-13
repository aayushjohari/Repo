#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream myfiles("Hello.txt");
   
    int m,n;
    cout<<"Enter the number of table : "<<endl;
    cin>>m>>n;
    
    for(int i=m;i<=n;i++){
        string strg = "a" + m;
        ofstream myfiles("hello" + strg + ".txt");
        for(int j=1;j<=10;j++){
            myfiles<<m<<"*"<<j<<"="<<m*j<<endl;
        }
        m++;
        myfiles<<endl;
        myfiles.close();
    }
   
}