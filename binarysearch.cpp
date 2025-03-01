#include <iostream>
using namespace std;

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int BinarySearch(int a[], int n, int k) {
    int i = 0, j = n - 1, result = -1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        
        if (a[mid] > k) {
            result = a[mid];
            j = mid - 1;
        } else {
            i = mid + 1;
        }
    }
    return result;
}

void nhapmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void inmang(int a[], int n) {
    cout << "Mảng đã nhập: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, k;
    cin >> n;

    int a[n];
    nhapmang(a, n);
    inmang(a, n);
    bubbleSort(a, n);
    
    cin >> k;

    int result = BinarySearch(a, n, k);
    
    if (result != -1)
        cout <<  result << endl;
    else
        cout << "Không có số nào lớn hơn " << k << endl;

    return 0;
}
