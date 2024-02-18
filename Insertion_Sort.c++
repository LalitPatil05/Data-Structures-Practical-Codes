#include<iostream>
using namespace std;
int main(){
    int size,i,j,temp;
    int arr[50];
    cout<<"Enter Arra Size :";
    cin>>size;
    cout<<"Enter Array Elememnts :";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Sorting Array Using Insertion Sort is..!!!"<<endl;
    for(i=1;i<size;i++){
        temp=arr[i];
        j=i-1;
        while((temp<arr[j]) && (j>=0)){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    cout<<"Array After Sorting is..!!!"<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}