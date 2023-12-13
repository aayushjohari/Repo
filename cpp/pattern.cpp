#include<iostream>
using namespace std;

void printArray(int arr[]){
 int i, n;

cout<<"enter the size"<<endl;
cin>>n;

arr[n];

for(i=0;i<n;i++){
    cout<<"enter the elements "<<endl;
    cin>>arr[i];
}

cout<<"[";

for(i=0;i<n;i++){
    if(i<=(n-2)){
        cout<<arr[i]<<"->";
    }else{
        cout<<arr[i];
    }

}

cout<<"]";
}

int main(){
    int n;
    int arr[n];
    printArray(arr);
}