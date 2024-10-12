#include <iostream>
using namespace std;

void SelectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx]) {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
    }
}

int main() {
    int a[] = {6, 10, 5, 7, 11, 8, 16, 4, 9, 14, 18, 22};
    int n = sizeof(a) / sizeof(a[0]);

    SelectionSort(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
