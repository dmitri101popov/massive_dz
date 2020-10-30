#include<stdio.h>

int main(){
	int a[11];
	for(int i = 0;i <= 9;i++ ) {
		if (i % 2 == 0) {
			a[i] = 0;
		}
		else {
			a[i] = 1;
		}
	if (i == 4) {
		a[i] = 3;
	}
	
	if (i == 5) {
	a[i] = 2;
	}
	
	printf("%d ", a[i]);
	
	}

	return 0;
}

