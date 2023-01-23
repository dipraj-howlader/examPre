#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i, j, mid, temp;
    
    for (i = 0; i < n-1; i++) {
        mid = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[mid]) {
                mid = j;}
        }
        temp = arr[mid];
        arr[mid] = arr[i];
        arr[i] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";}
    return 0;
}
 
//  8
//  77 33 44 11 88 22 66 55 