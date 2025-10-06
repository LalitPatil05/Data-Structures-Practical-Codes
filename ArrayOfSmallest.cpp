#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	int smallest = arr[0];
	
	for(int i=0;i<size;i++){
		if(arr[i] < smallest){
			smallest = arr[i];
		}
	}
	cout<<"Smallest Element in the Array is : "<<smallest<<endl;
	
	return 0;
}