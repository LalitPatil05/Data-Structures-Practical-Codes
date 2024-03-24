#include<iostream>
using namespace std;
int BinarySearch(int arr[],int size,int element){
    int low = 0;
    int mid;
    int high = size-1;

    for (int i = 0; i < size; i++)
    {
            while(low<=high){
            mid = (low+high)/2;
            if(arr[mid] == element){
                return mid;
            }
            else if(arr[mid]<element){
                low = mid + 1;
            }
            else{
                mid = high - 1;
            }
        }
        return -1;
    }
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int element = 5;
    int size = sizeof(arr) / sizeof(int);

    int IndexOfElement = BinarySearch(arr,size,element);

    cout<<"Element Found At Index Location : "<<IndexOfElement;

    return 0;
}