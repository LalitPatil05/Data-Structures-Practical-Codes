#include<iostream>
using namespace std;

int main(){
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int greatest = arr[0];
	
	for(int i=0;i<size;i++){
		if(arr[i] > greatest){
			greatest = arr[i];
		}
	}
	
	cout<<"Greatest Element in the Array is : "<< greatest <<endl;
	
	return 0;
}