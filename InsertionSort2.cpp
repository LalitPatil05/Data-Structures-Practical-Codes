/*
 * InsertionSort2.cpp
 *
 *  Created on: 23-Mar-2024
 *      Author: admin
 */

#include<iostream>
using namespace std;

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" , ";
	}
}

void InsertionSort(int arr[], int n){
	int i,j,small,index,temp;
	int count = 0;

	for(i=0 ; i<n-1 ; i++){
		small = arr[i];
		for(j = i+1 ; j<n ; j++){
			if(small>arr[j]){
				small = arr[j];
				count++;
				index = j;
			}
		}
		if(count != 0){
			temp = arr[i];
			arr[i] = small;
			arr[index] = temp;
		}
		count = 0;
	}
}

int main(){
	int n=5;
	int arr[] = {5,4,3,2,1};

	cout<<"Unsorted Array :";
	printarray(arr,n);

	InsertionSort(arr,n);

	cout<<endl;

	cout<<"Sorted Array is :";

	printarray(arr,n);

	return 0;
}
