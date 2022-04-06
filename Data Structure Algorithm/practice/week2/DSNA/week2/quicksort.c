
//
//double arr[] = { 42.65,3.23,5.1,2.52,4.09,7.3,83.43,52.11,62.3,6,9.6,34.6,54.4,67.01,1.07,1.04,3.22,5.3,55.1,35 };
//int size = sizeof(arr) / sizeof(arr[0]);
//
//void quickSort(double arr[], int low, int high);
//void printArray(double arr[],int size);
//
//int main() {
//	quickSort(arr, 0, size);
//
//	printf("Sorted Array by \"Quick Sort\" : \n");
//	printArray(arr, size);
//
//	return 0;
//}
//
//void quickSort(double arr[], int low, int high) {
//	if (low < high) {
//		int pivot = partition(arr, low, high);
//		quickSort(arr, low, pivot);
//		quickSort(arr, pivot + 1, high);
//	}
//
//
//}
//
//int partition(double arr[], int low, int high) {
//	int indexOfMid = low; // 기준이 될 값의 인덱스를 제일 왼쪽, low로 설정
//	int i;
//	double mid = arr[low];
//	double key;
//
//	for (i = low + 1; i < high; i++) {
//		int j = i;
//		if (mid > arr[i]) {
//			key = arr[i];
//			printf("key : %.2f\n\n", key);
//			while (j > low) { // 
//				arr[j] = arr[j - 1];
//				printf("arr[%d] : %.2f   arr[%d] : %.2f\n", j, arr[j], j - 1, arr[j - 1]);
//				j--;
//			}
//			arr[low] = key;
//			printf("arr[%d] : %.2f\n",low,key);
//			printf("-------------------------------------------------------------------------\n");
//			indexOfMid++;
//		}
//	}
//	return indexOfMid; // mid 값은 이미 자리를 찾은 상태이기 때문에 mid의 index를 return해서 quicksort 범위 한정
//}

//void printArray(double arr[], int size) {
//	for (int i = 0; i < size; i++) {
//		printf("%.2f ", arr[i]);
//	}
//	printf("\n");
//}