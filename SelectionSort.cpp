/*
 * SelectionSort.cpp
 *
 *  Created on: 23-Mar-2024
 *      Author: Lalit Patil
 */

#include<iostream>

using namespace std;

void printarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<" , ";
	}
}

void SelectionSort(int arr[],int n){
	int i,j,temp,min;

	for(i=0;i<n-1;i++){
		min = i;
			for(j=i+1;j<n;j++){
				if(arr[j]<arr[min]){
					min = j;
				}
			}
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
	}
}


int main(){
	int size = 5;
	int arr[] = {5,4,3,2,1};

	cout<<"Array is : ";
	printarray(arr,size);
	cout<<endl;
	cout<<"Array After Sorting is : ";
	SelectionSort(arr,size);
	printarray(arr,size);

	return 0;
}






