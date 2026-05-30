#include <iostream>
using namespace std;

// int main(){
//     int size;
//     cout<<"Enter size of the array :"<<endl;
//     cin>>size;
//     int arr[size];
//     cout<<"Enter the element of the Array "<<endl;
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }
//     //Sum of all array Element
//     int sum = 0;
//     for(int i=0; i<size; i++){
//         sum = sum + arr[i];
//     }
//     cout<<"The sum of the all Element is :"<<sum;

// return 0;
// }

//using function 

int sum_arr(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter size of the array :" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the element of the Array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = sum_arr(arr, size);
    cout << "The sum of all elements is : "<<sum<< endl;
    return 0;
} 