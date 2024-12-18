
#include <iostream>
using namespace std;

int* bubbleSort(int arr[], int n) {
	static int sortedArr[100];
	for (int i = 0; i < n; i++) {
		sortedArr[i] = arr[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (sortedArr[j] > sortedArr[j + 1]) {
				int temp = sortedArr[j];
				sortedArr[j] = sortedArr[j + 1];
				sortedArr[j + 1] = temp;
			}
		}
	}
	return sortedArr;
	}
	int main() {
		int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
		int n = sizeof(arr) / sizeof(arr[0]);
		cout << "array to sort: ";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		int* sortedArr = bubbleSort(arr, n);
		cout << "array after sorting: ";
		for (int i = 0; i < n; i++) {
			cout << sortedArr[i] << " ";
		}
		cout << "\n";
		return 0;
	}

	