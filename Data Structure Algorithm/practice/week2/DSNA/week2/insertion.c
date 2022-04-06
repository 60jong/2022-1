#include <stdio.h>
//int main() {
//	double arr[] = {3.3,7.1,4.3,8.2,9.7,234.4,6.4,54.2,1.5,5.3,12.4,6.35,3,2,0.7,34.1,3.14,1.56,3.09,5.98};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	double key;
//
//	for (int i = 1; i < size ; i++) {
//		int j = i;
//		if (arr[i] < arr[i - 1]) {
//			key = arr[i];
//			printf("key : %.2f\n\n", key);
//			// 배열 arr에 대해 인덱스 i가 1부터 증가해가면서 이전 인덱스 값보다 작다면, key에 arr[i]를 저장한다.
//			while (j >= 0 && arr[j-1] > key) {
//				arr[j] = arr[j - 1];
//				printf("arr[%d] : %.2f     arr[%d] : %.2f\n", j, arr[j], j - 1, arr[j - 1]);
//				j--;
//				printf("j-- : %d\n", j);
//			// key에 담긴 값보다 작은 값을 만날 때까지 인덱스 j( = i)를 역순으로 진행하며 key보다 큰 값들은 오른쪽으로 한칸씩 옮긴다.
//			}
//			printf("\n");
//			arr[j] = key;
//			// key에 담긴 값보다 작은 값을 만나면 그 다음 위치에 key를 저장한다.
//			printf("arr[%d] : %.2f\n", j, key);
//			printf("\n-------------------------------------------------------------\n");
//		}
//	}
//
//	printf("Sorted Array : \n");
//	for (int i = 0; i < size; i++) {
//		printf("%.2f ", arr[i]);
//	}
//	return 0;
//}
//
//void printArray(int arr[], int size);
//void swap(int* a, int* b);
//
//int main(void) {
//	int arr[] = { 1,5,8,6,3,9,12,15,11,16,19,33,2,14,22 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int key,j;
//	for (int i = 1; i < size; i++) {
//		if (arr[i] < arr[i - 1]) {
//			key = arr[i];
//			j = i - 1;
//			while (key < arr[j]) {
//				arr[j+1] = arr[j];
//				j--;
//			}
//			arr[j+1] = key;
//		}
//	}
//
//	printArray(arr, size);
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