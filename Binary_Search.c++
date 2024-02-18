#include<iostream>
using namespace std;
int main(){
    int count,i,num,first,last,middle;
    int arr[30];
    cout<<"How Many Elements Would You Like to Enter ? :";
    cin>>count;
    for(i=0;i<count;i++){
        cout<<"Enter Number :"<<(i+1)<<": ";
        cin>>arr[i];
    }
    cout<<"Enter the Number That You Want to Search.!! :";
    cin>>num;
    first=0;
    last=count-1;
    middle=(first+last)/2;
    while(first<=last){
        if(arr[middle]<num){
            first = middle + 1;
        }
        else if(arr[middle]==num){
            cout<<num<<" Found in the Array at the Location "<<middle+1<<endl;
            break;
        }
        else{
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if(first>last){
        cout<<num<<"Not Found in the Array..!!";
    }
    return 0;
}