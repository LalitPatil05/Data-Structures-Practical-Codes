#include<iostream>
using namespace std;

void smallest(int arr[], int size){
	int smallest = arr[0];
	for(int i=0;i<size;i++){
		if(arr[i] < smallest){
			smallest = arr[i];
		}
	}
	
	cout<<"Smallest Element in the Array is : "<<smallest<<endl;
	
}

void greatest(int arr[], int size){
	int greatest = arr[0];
	for(int i=0;i<size;i++){
		if(arr[i] > greatest){
			greatest = arr[i];
		}
	}
	cout<<"Greatest Element in the Array is : "<<greatest<<endl;
}


int main(){
	int arr[] = {12,3,4,5,2,3,5,2,1,4,5,3,5,7};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout<<"Size of Array is : "<<sizeof(arr)<<endl;
	cout<<"Number of Elements in Array are : "<<size<<endl;
	smallest(arr,size);
	greatest(arr,size);
	
	return 0;
}