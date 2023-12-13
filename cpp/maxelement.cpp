#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"enter the size"<<endl;
    cin>>N;
   
   int arr[N];
   cout<<"enter the elements"<<endl;
   
   for(int i=0 ;i<N;i++){
    cin>>arr[i];
   }

   int max=arr[0];
   int Smax=max;
   int Tmax=Smax;

   for(int i=0;i<N;i++){
    if( max < arr[0]){
        max=arr[i];
    }
    if (Smax < arr[i] && arr[i]< max ){
        Smax = arr[i];
    }
    if(Tmax < arr[i] && arr[i]< Smax){
        Tmax = arr[i];
        cout<<Tmax;
    }
   }

    
}