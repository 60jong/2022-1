#include <stdio.h>

////int main() {
////	int data[] = { 1,2,3,4,5,12,35,321,3461,34,234 };
////
////	int size = sizeof(data) / sizeof(int);
////
////	for (int i = 0; i < size - 1; i++) {
////		int temp = 0;
////		int maxIndex = 0;
////
////		for(int j = 0;j < size-i; j++){
////			if (data[j] > data[maxIndex]) {
////				maxIndex = j;
////			}
////		}
////		if (maxIndex != size - 1 - i) {
////			temp = data[maxIndex];
////			data[maxIndex] = data[size - 1 - i];
////			data[size - i - 1] = temp;
////		}
////
////
////	}
////
////
////	for (int i = 0; i < size; i++) {
////		printf("%d ", data[i]);
////	}
////	return 0;
////}
//
//void printArray(int arr[],int size);
//
//int main(void) {
//
//	int arr[] = { 1, 3, 53, 12, 5, 9, 4, 34, 2, 132 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int max, maxIndex, temp;
//
//	for (int i = 0; i < size - 1; i++) {
//		max = arr[0];
//		for (int j = 1; j < size - i; j++) {
//			if (arr[j] > max) {
//				max = arr[j];
//				maxIndex = j;
//			}
//		}
//		temp = arr[maxIndex];
//		arr[maxIndex] = arr[size - 1 - i];
//		arr[size - 1 - i] = temp;
//	}
//
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