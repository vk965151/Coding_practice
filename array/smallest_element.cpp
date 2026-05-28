
// Smallest element in an array with index

#include<iostream>
using namespace std;
int main (){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of the Array:";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int smallest = arr[0];
    int index = 0;
    for(int i=1; i<size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
            index = i;
        }
    }
    cout<<"The smallest element in an array is :"<<smallest<<endl;
    cout<<"At This index :"<<index;
    return 0 ;
    
}