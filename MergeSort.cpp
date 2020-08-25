#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int s, int e) {
	int mid = s + ((e - s) / 2);
	int i = s, j = mid + 1, k = s, temp[1000];
	while (i <=  mid && j <= e) {
		if (a[i] < a[j]) temp[k++] = a[i++];
		else temp[k++] = a[j++];
	}
	while (i <= mid) temp[k++] = a[i++];
	while (j <= e) temp[k++] = a[j++];
	for (int x = s; x <= e; x++) a[x] = temp[x];

}
void mergeSort(int *a, int s, int e) {
	if (s < e) {
		int mid = s + ((e - s) / 2);
		mergeSort(a, s, mid);
		mergeSort(a, mid + 1, e);
		merge(a, s, e);
	}
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	mergeSort(a, 0, n - 1);
	for (int q = 0; q < n; q++) cout << a[q] << " ";
	cout << endl;
}
