#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 8;
string names[MAX_SIZE] = {"Brown", "Davis", "Johnson", "Smith", "Wanger"};
int n = 5;

void addName(string name) {
    names[n] = name;
    n++;
    sort(names, names + n);
}

void deleteName(string name) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (names[i] == name) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < n - 1; i++) {
            names[i] = names[i + 1];
        }
        n--;
    }
}

int main() {
    addName("Ford");
    addName("Taylor");
    deleteName("David");

    cout << "Array after adding Ford and Taylor and deleting David: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}
