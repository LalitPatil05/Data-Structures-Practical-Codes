#include<iostream>
using namespace std;
const int SIZE=5;
void Q_Sort(int arr[],int l, int r){
    int pivot=arr[l]; // your pivot is element/data of left
    int left=l;
    int right=r;
    while(l<r){
        while(arr[r]>=pivot && l<r){
            r--;
            if(l!=r){
                arr[r]=arr[l];
                r--;
            }
        }
        arr[l]=pivot;
        pivot=l; //pivot is not index of pivot element...
        if(left<pivot){
            Q_Sort(arr,left,pivot-1);
        }
        if(pivot<right){
            Q_Sort(arr,pivot+1,right);
        }
    }
}
void Quick_Sort(int arr[]){
    Q_Sort(arr,0,SIZE-1);
}
int main(){
    int arr[SIZE],i;
    cout<<"Enter Five Elements..!! :"<<endl;
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    Quick_Sort(arr);
    cout<<"After Sorting Array is..!! :"<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}