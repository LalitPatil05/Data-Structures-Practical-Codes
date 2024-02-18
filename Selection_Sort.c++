#include<iostream>
using namespace std;
int main(){
    int size;
    int arr[50];
    int i,j,temp,index,small;
    int count=0;
    cout<<"Enter Array Size..!! :";
    cin>>size;
    cout<<"Enter Array Elements..!! :";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Sorting Array Using Selection Sort is..!!!"<<endl;
    for(i=0;i<(size-1);i++){
        small=arr[i];
        for(j=(i+1);j<size;j++){
            if(small>arr[j]){
                small=arr[j];
                count++;
                index=j;
            }
        }
        if(count!=0){
            temp=arr[i];
            arr[i]=small;
            arr[index]=temp;
        }
        count=0;
    }
    cout<<"Now the Array After Sorting is..!!!"<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}