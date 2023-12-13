#include<iostream>
using namespace std;

class Running{

    public:

  /*  int runningSum(int arr[],int N){
        int sum=0;
        
        for(int i=0;i<N;i++){
           sum=sum+arr[i];

           cout<<sum<<" ";
         }
       
    }
*/
    int commonArray(int arr[], int arr2[], int N){

        

        for(int i=0;i<N;i++){

            for (int j=0; j<N;j++){
                
                if(arr[i]==arr2[j]){

                  cout<<arr[i];

                } 
              
            }
        }
    }
};

int main(){

    Running R;
  /*  
    int N;
    cout<<"Enter the size"<<endl;
    cin>>N;

   int arr[N];
   cout<<"Enter the elements"<<endl;
   

    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

   

   R.runningSum ( arr,N);
   */

  int N;
  cout<<"enter the size"<<endl;
  cin>>N;

  int arr[N];
  cout<<"enter the elements"<<endl;
  
  for(int i=0;i<N;i++){
    cin>>arr[i];
  }
int arr2[N];
  for(int j=0;j<N;j++){
    cin>>arr2[j];
  }
    
  R.commonArray(arr,arr2,N);
}


