//#include <stdio.h>
//
//int res[100];
//
//
//void radixSort(int arr[], int size);
//int getMax(int arr[], int size);
//void countingSort(int arr[], int size, int place);
//void printArray(int arr[], int size);
//
//int main(void) {
//	int arr[] = { 1,23,633,123,468,53,67,19,42,5,75,234,7,9,90,56 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	radixSort(arr, size);
//
//	printArray(arr, size);
//	return 0;
//}
//
//void radixSort(int arr[], int size) {
//	int max = getMax(arr,size);
//	printf("%d\n", max);
//
//	for (int place = 1; max / place > 0; place *= 10) {
//		countingSort(arr, size, place);
//	}
//}
//
//int getMax(int arr[], int size) {
//
//	int max = arr[0];
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] > max)
//			max = arr[i];
//	}
//
//	return max;
//}
//
//void countingSort(int arr[], int size, int place) {
//	int count[10];
//	for (int i = 0; i < 10; i++) {
//		count[i] = 0;
//	}
//
//	for (int i = 0; i < size; i++) {
//		int index = (arr[i] / place) % 10;
//		count[index]++;
//	}
//
//	for (int i = 1; i < 10; i++) {
//		count[i] += count[i - 1];
//	}
//
//	for (int i = size-1; i >=0; i--) {
//		res[count[(arr[i] / place) % 10] - 1] = arr[i];
//		count[(arr[i] / place) % 10]--;
//	}
//
//	for (int i = 0; i < size; i++) {
//		arr[i] = res[i];
//	}
//}
//void printArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
