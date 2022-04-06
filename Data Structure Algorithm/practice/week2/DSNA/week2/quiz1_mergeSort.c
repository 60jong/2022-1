#include <stdio.h>

int sort[20];
void merge(char arr[], int low, int mid, int high);
void mergeSort(char arr[], int low, int high);

int main(void) {

	char arr[] = { 'a','B','r','c','f','b','o','P','s','Q','B','r','G','K','b','L','z','P','s','Q' };

	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Unsorted Array\n");
	for (int i = 0; i < size; i++) {
		printf("%c  ", arr[i]);
	}
	printf("\n\n");

	mergeSort(arr, 0, size - 1);

	printf("Merge Sorted array in ascending order : \n");
	for (int i = 0; i < size; i++) {
		printf("%c  ", arr[i]);
	}
	printf("\n");


	return 0;
}

void merge(char arr[], int left, int mid, int right) {

	int i = left;
	int j = mid + 1;
	int k = left;
	while (left <= mid && j <= right) {
		if (arr[left] <= arr[j]) {
			sort[i++] = arr[left++];
		}
		else {
			sort[i++] = arr[j++];
		}
	}

	if (right > (j - 1)) {
		for (int t = j; t <= right; t++) {
			sort[i++] = arr[t];
		}
	}
	if (right == (j - 1)) {
		for (int t = left; t <= mid; t++) {
			sort[i++] = arr[t];
		}
	}

	for (int t = k; t < right + 1; t++) {
		arr[t] = sort[t];
	}

}

void mergeSort(char arr[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}