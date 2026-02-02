#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n], b[n], sum[n];
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        sum[i] = a[i] + b[i];
    }
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (sum[j] < sum[min]) {
                min = j;
            }
        }
        int temp = sum[i];
        sum[i] = sum[min];
        sum[min] = temp;
    }
    cout << "Sorted sum array:\n";
    for (int i = 0; i < n; i++) {
        cout << sum[i] << " ";}
        return 0;
    }
