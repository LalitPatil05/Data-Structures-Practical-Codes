#include<iostream>
using namespace std;
int LinearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[], int size, int element){
    int low = 0;
    int mid;
    int high = size-1;

    for (int i = 0; i < size; i++)
    {   
        while(low<=high){
            mid = (low + high) / 2;
            if(arr[mid]==element){
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
    int size = sizeof(arr) / sizeof(int);
    int element = 11;

    int Result1;
    Result1 = LinearSearch(arr,size,element);
    cout<<"\nElement Present At Index Location Of Array is (Using LinearSearch) : "<<Result1;

    int Result2;
    Result2 = BinarySearch(arr,size,element);
    cout<<"\nElement Present At Index Location Of Array is (Using BinarySearch) : "<<Result2;

    return 0;

}
