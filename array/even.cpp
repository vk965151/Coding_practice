#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the Array :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter element of the array :"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int index;
    for(int i=0; i<size; i++){
        if(arr[i] % 2 == 0){
            cout<<"Even :"<<arr[i]<<" at Index :"<<i<<endl;
        }
        else{
            cout<<"odd :"<<arr[i]<<" At index :"<<i<<endl;
        }
    }
    return 0;
}