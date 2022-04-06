#include <stdio.h>
//
////int main() {
////	int arr[] = { 1,334,2,5,235,8,745,63,452,431,34 };
////
////	int size = sizeof(arr) / sizeof(arr[0]);
////
////	for (int i = 0; i < size-1; i++) {
////		int temp = 0;
////		for (int j = 0; j < size-1-i; j++) {
////			if (arr[j] > arr[j + 1]) {
////				temp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = temp;
////			}
////		} 
////	}
////
////	for (int i = 0; i < size; i++) {
////		printf("%d ", arr[i]);
////
////	}
////	return 0;
////}
//void printArray(int arr[], int size);
//void swap(int* a, int* b);
//int main(void) {
//	int arr[] = { 1,334,2,5,235,8,745,63,452,431,34 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	for (int i = 0; i < size - 1; i++) {
//		for (int j = 0; j < size - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//	}
//
//	printArray(arr, size);
//
//	return 0;
//}
//
//void printArray(int arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void swap(int* a, int* b) {
//	int temp;
//
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}