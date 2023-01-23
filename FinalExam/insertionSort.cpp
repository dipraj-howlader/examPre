#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
        for (int i = 1; i < n; i++) {
        int state = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > state) {
            arr[j + 1] = arr[j];
            j--;}
        arr[j + 1] = state;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    return 0;
}
