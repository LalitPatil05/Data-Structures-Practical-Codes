#include<iostream>
using namespace std;
#define num 5
void merge(int *a, int *b, int low, int pivot, int high){
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;
    while((h<=pivot) && (j<=high)){
        if(a[h]<=a[j]){
            b[i]=a[h];
            h++;
        }
        else{
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot){
        for(k=j;k<=high;k++){
            b[i]=a[k];
            i++;
        }
    }
    else{
        for(k=h;k<=pivot;k++){
            b[i]=a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++){
        a[k]=b[k];
    }
}
void mergesort(int *a, int *b, int low, int high){
    int pivot;
    if(low<high){
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
//main program..
int main(){
    int a[]={12,10,43,23,-78};
    int b[num];
    mergesort(a,b,0,num-1);
    cout<<"Array After Sorting is..!!"<<endl;
    for(int i=0; i<num; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}