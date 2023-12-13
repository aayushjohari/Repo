#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    while(1){
    string name;
    string password;
    cout<<"enter your name : ";
    cin>>name;
    cout<<"enter password : ";
    cin>>password;

    if(name =="rahul" && password =="1234")
    {
        cout<<"welcome\n";
        continue;
        
    }
    else if(name=="aayush" && password=="fire11")
    {
        cout<<"..... welcome aayush";
    }
    
    else{
        cout<<"please enter right information "<<endl;
    }
    break;
}
}
