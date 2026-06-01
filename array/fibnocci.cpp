#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    int a = 0, b = 1, fib;
    for(int i=0; i<num; i++){
        cout<<a<<" ";
        fib = a+b;
        a = b;
        b = fib;

    }
    cout<<endl;

}