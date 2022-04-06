#include <stdio.h>
#include <string.h>

int main(void) {
	
	char a[] = "hello";
	char b[] = "server";


	strncat(a,b,2);	
	printf("%s\n",a);
	
	
	
	return 0;
}
