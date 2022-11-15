#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int *x, int *y){//복사본이 넘어가는 call by value 형태 
	
	int temp;
	temp= *x;
	*x= *y;
	*y=temp;
}
int main(int argc, char *argv[]) {
	
	int a = 3;
	int b = 5;
	swap(&a,&b);
	printf("a:%i, b:%i\n", a,b);
	
	
	
	return 0;
}
