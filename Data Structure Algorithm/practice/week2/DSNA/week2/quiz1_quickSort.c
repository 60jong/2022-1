//#include <stdio.h>
//
//void quickSort(char arr[], int low, int high);
//int partition(char arr[], int low, int high);
//int main() {
//	char arr[] = { 'a','B','r','c','f','b','o','P','s','Q','B','r','G','K','b','L','z','P','s','Q' };
//
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	printf("Unsorted Array\n");
//	for (int i = 0; i < size; i++) {
//		printf("%c  ", arr[i]);
//	}
//	printf("\n\n");
//	quickSort(arr, 0, size);
//
//	printf("Quick Sorted array in ascending order : \n");
//	for (int i = 0; i < size; i++) {
//		printf("%c  ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//
//void quickSort(char arr[], int low, int high) {
//	if (low < high) {
//		int pivot = partition(arr, low, high);
//		quickSort(arr, low, pivot);
//		quickSort(arr, pivot + 1, high);
//	}
//}
//
//int partition(char arr[], int low, int high) {
//	int indexOfMid = low;
//	int i;
//	char mid = arr[low];
//	char key;
//
//	for (i = low + 1; i < high; i++) {
//		int j = i;
//		if (mid > arr[i]) {
//			key = arr[i];
//
//			while (j > low) { 
//				arr[j] = arr[j - 1];
//
//				j--;
//			}
//			arr[low] = key;
//
//			indexOfMid++;
//		}
//	}
//	return indexOfMid;
//}
