#include<stdio.h>

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
        printf(" ");
        }  printf("\n");
}

int IndInsertion(int arr[],int n, int element, int capacity,int index){
    if(n>= capacity){
        return-1;
    }

    for(int i=n-1;i>= index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}

int main(){
    int n=5;
    int arr[100]={1,4,8,5,3};
    int capacity,index=3;
    int element;
    display(arr,n);
    IndInsertion(arr,n,45,100,index);
    n += 1;
    display(arr,n);
}