#include<iostream>
using namespace std;
int LinearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            cout<<"Element is Found At index Location : "<<i;
            break;
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(int);

    int element = 6;

    LinearSearch(arr,size,element);

    return 0;
}