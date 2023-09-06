#include <iostream>
using namespace std;

int main() {
    int num[] = {94, 69, 35, 14, 13};
    int x[] = {94, 69, 35, 14, 13};
    int size = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < size / 2; i++) {
        int temp = x[i];
        x[i] = x[size - i - 1];
        x[size - i - 1] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << x[i] << ' ';
    }
    cout << endl;
    return 0;
}
