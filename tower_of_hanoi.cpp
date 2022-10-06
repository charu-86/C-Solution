/*
	This is the solution to one of the most famous problems there are: The Tower of Hanoi
*/
#include <stdio.h>

void TOH(int n, char s, char h, char d){
	if (n == 1){
		printf("Move 1 from %c to %c\n", s, d);
		return;
	}
	TOH(n - 1, s, d, h);
	printf("Move %d from %c to %c\n",n, s, d);
	TOH(n - 1, h, s, d);
}

int main(){
	int n = 5;
	char s = 'S', h = 'H', d = 'D';
	TOH(n, s, h, d);
	return 0;
}