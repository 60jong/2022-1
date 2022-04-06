//#include <stdio.h>
//#include <stdlib.h>
//#include <omp.h>
//
//
//
//int main(void) {
//	int a = 0;
//	int re[4] = { 0 };
//
//	int i;
//#pragma omp parallel num_threads(4) firstprivate(a)
//	{
//	#pragma omp for
//		for (i = 0; i < 4; i++) {
//
//			a  += i;
//			re[i] = a;
//		}
//	}
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", re[i]);
//	}
//
//	return 0;
//}