#include<iostream>
using namespace std;
void bubblesort(int x[], int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(x[j]>x[j+1]){
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
}
int main(){
    int i,n,x[50];
    cout<<"Enter the Number of Elements :";
    cin>>n;
    cout<<"Enter the Data :";
    for(i=0;i<n;i++){
        cout<<"Enter :";
        cin>>x[i];
    }
    bubblesort(x,n);
    cout<<"Array of Elements After Sorting is :";
    for(i=0;i<n;i++){
        cout<<x[i];
    }
}