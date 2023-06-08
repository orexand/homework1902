#include <iostream>


using namespace std;


void bubble_sort(int arr[], int size) {
    for (int n = 1, temp = 0; n < size; n++) {
        if (arr[n - 1] > arr[n]) {
            temp = arr[n];
            arr[n] = arr[n - 1];
            arr[n - 1] = temp;
        }
    }
    if (size > 1) {
        bubble_sort(arr, size - 1);
    }
}

int main() {
    int n = 15;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 91 + 10;
    }

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }

    cout << endl;
    bubble_sort(arr, n);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }

    delete[] arr;
}