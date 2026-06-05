#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number :";
    cin>>num;
    int count=0, reverse=0,lastdigit;
    while(num!=0)
    {
            lastdigit=num%10;
            reverse=reverse*10+lastdigit;
            num=num/10;
            count++;
    }
    cout<<"Number of digits in the number is : "<<count<<endl;
    cout<<"Reverse of the number is : "<<reverse<<endl;
}