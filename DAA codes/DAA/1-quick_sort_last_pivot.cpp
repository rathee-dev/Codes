 
#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int> &a, int lb, int ub) {
    int pivot = a[ub];
    int i = lb - 1;

    for (int j = lb; j < ub; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[ub]);
    return i + 1;
}

void quicksort(vector<int> &a, int lb, int ub) {
    if (lb < ub) {
        int pi = partition(a, lb, ub);
        quicksort(a, lb, pi - 1);
        quicksort(a, pi + 1, ub);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quicksort(a, 0, n - 1);

    cout << "Sorted Array: ";
    for (int x : a)
        cout << x << " ";

    return 0;
}
