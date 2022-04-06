#include <stdio.h>
//
//void merge_sort(double arr[], int left, int right);
//void merge(double arr[], int left, int mid, int right);
//double sort[20];
//int main() {
//	double arr[] = { 1.02,3.8,5.3,2.3,7.08,9.9,4.3,32.4,41.01,25.2,35.43,4,6.43,2.9,1.6,97,34.54,22.19,1.45,2.0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	merge_sort(arr, 0, size-1);
//
//
//	printf("Sorted Array by \"Merge Sort\" : \n");
//	for (int i = 0; i < size; i++) {
//		printf("%.2f / ", arr[i]);
//	}
//	return 0;
//}
//
//void merge(double arr[], int left,int mid,int right) {
//	for (int a = left; a <= right; a++) {
//		printf("arr[%d] = %.2f  ", a,arr[a]);		// merge 전 merge 대상 값 나열
//	}
//	printf("\n");
//	int i = left;
//	int j = mid + 1;
//	int k = left;
//	while (left <= mid && j <= right) {
//		if (arr[left] <= arr[j]) {
//			sort[i++] = arr[left++];
//		}
//		else {
//			sort[i++] = arr[j++];
//		}
//	}
//	//남아있는 값들 모두 sort배열에 추가
//	if (right > (j-1) ) {
//		for (int t = j; t <= right; t++) {
//			sort[i++] = arr[t];
//		}
//	}
//	if (right == (j-1) ) {
//		for (int t = left; t <= mid; t++) {
//			sort[i++] = arr[t];
//		}
//	}
//	// merge를 통해 정렬한 내용이 저장된 sort배열을 arr로 덮어쓰기
//	for (int t = k; t < right + 1; t++) {
//		arr[t] = sort[t];
//	}
//	for (int a = k; a <= right; a++) {
//		printf("arr[%d] = %.2f  ", a, arr[a]);     // merge 후 merge 대상 값 나열
//	}
//	printf("\n------------------------------------------------------------------------------\n");
//}
//
//void merge_sort(double arr[],int left, int right) {
//	if (left < right) {
//		int mid = (left + right) / 2;
//		merge_sort(arr, left, mid);
//		merge_sort(arr, mid + 1, right);
//		merge(arr, left, mid, right);
//	}
//}
// 
// 
// 
// 
// 
// 
//void printArray(int arr[], int size);
//void mergeSort(int arr[], int low, int high);
//void merge(int arr[], int low, int mid, int high);
//
//int main(void) {
//	int arr[] = { 1,23,633,123,468,53,67,19,42,5,75,234,7,9,90,56 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	mergeSort(arr, 0, size - 1);
//	printArray(arr, size);
//	return 0;
//}
//
//void mergeSort(int arr[],int low, int high) {
//	int mid = (low + high) / 2;
//
//	if (low < high) {
//		mergeSort(arr, low, mid);
//		mergeSort(arr, mid + 1, high);
//		merge(arr, low, mid, high);
//	}
//}
//
//void merge(int arr[], int low, int mid, int high) {
//	int i = low;
//	int j = mid + 1;
//	while (i <= mid && j <= high) {
//		if (arr[low] > arr[j]) {
//			int temp = arr[low];
//			arr[low] = arr[j];
//			arr[j] = temp;
//			i++;
//		}
//		else
//			j++;
//	}
//
//}
//
//void printArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

