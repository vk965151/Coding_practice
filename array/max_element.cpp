#include <iostream>
using namespace std;

int main() {
    int arr[5] = {56, 76, 43, 87, 54};
    int mx = arr[0];
    int index = 0;
    for (int i = 1; i < 5; ++i) {
        if (arr[i] > mx) {
            mx = arr[i];
            index = i;
        }
    }
    cout << "Max element: " << mx << " at index " << index << '\n';
    return 0;
}

