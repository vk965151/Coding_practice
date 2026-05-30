#include <iostream>
using namespace std;

// int main() {
//     int arr[5] = {56, 76, 43, 87, 54};
//     int mx = arr[0];
//     int index = 0;
//     for (int i = 1; i < 5; ++i) {
//         if (arr[i] > mx) {
//             mx = arr[i];
//             index = i;
//         }
//     }
//     cout << "Max element: " << mx << " at index " << index << '\n';
//     return 0;
// }

// Max element in an array Using function 


int max_arr(int arr[], int size)
{
    int max = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main()
{
    int size;
    cout << "Enter The size of the Array :";
    cin >> size;
    int arr[size];
    cout << "Enter the element of the array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int idx = max_arr(arr, size);
    cout << "Max element: " << arr[idx] << " at index " << idx << '\n';
    return 0;
}