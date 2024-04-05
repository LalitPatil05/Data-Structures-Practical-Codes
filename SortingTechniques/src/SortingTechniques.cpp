/*
 * SortingTechniques.cpp
 *
 *  Created on: 05-Apr-2024
 *      Author: Lalit Patil
 */


#include<iostream>
using namespace std;

void BubbleSort(int arr[],int size){
	int i,j;
	int temp;

	for(i=0;i<size;i++){

		for(j=0;j<size;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void SelectionSort(int arr[], int size){
	int i,j,min,temp;
	for(i=0;i<size-1;i++){
		min = i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

void InsertionSort(int arr[], int size){
	int i,j,min;
	for(i=1;i<size;i++){
		min = arr[i];
		j = i - 1;

		while((min<arr[j]) && (j>=0)){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = min;
	}
}

int main(){

	int i;
	int arr[] = {5,4,3,2,1};

	int size = sizeof(arr) / sizeof(int);

	BubbleSort(arr,size);
	cout<<"After Sorting BubbleSort Technique Array is : ";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" , ";
	}

	cout<<"------------------------------------------\n";

	SelectionSort(arr,size);
	cout<<"After Sorting SelectionSort Technique Array is : ";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" , ";
	}

	cout<<"--------------------------------------------\n";

	InsertionSort(arr,size);
	cout<<"After Sorting InsertionSort Technique Array is : ";
	for(i=0;i<size;i++){
		cout<<arr[i]<<" , ";
	}

	return 0;
}
