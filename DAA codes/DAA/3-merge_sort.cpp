
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &a, int lb, int mid, int ub) {
    vector<int> b;
    int i = lb, j = mid + 1;

    while (i <= mid && j <= ub) {
        if (a[i] <= a[j])
            b.push_back(a[i++]);
        else
            b.push_back(a[j++]);
    }

    while (i <= mid)
        b.push_back(a[i++]);

    while (j <= ub)
        b.push_back(a[j++]);

    for (int i = lb; i <= ub; i++)
        a[i] = b[i - lb];
}

void merge_sort(vector<int> &a, int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;

        merge_sort(a, lb, mid);
        merge_sort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
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

    merge_sort(a, 0, n - 1);

    cout << "Sorted Array: ";
    for (int x : a)
        cout << x << " ";

    return 0;
}
