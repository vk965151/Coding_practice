#include<iostream>
using namespace std;
// int main(){
//     int fact = 1;
//     int num;
//     cout<<"Enter number for calculate factorial :"<<endl;
//     cin>>num;
//     for(int i=1; i<=num; i++){
//         fact = fact*i;
//     }
//     cout<<"the factorial is :"<<fact;

//     return 0;
// }

int findFact(int nums){
    int fact = 1;
    for(int i=1; i<=nums; i++){
        fact = fact*i;
    }

    return fact;
}

int main(){
    int num;
    cout<<"Enter number to calculate the factorial"<<endl;
    cin>>num;
    int f = findFact(num);
    cout<<"factorial is :"<<f;
    return 0;
}