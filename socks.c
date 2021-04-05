#include <stdio.h>

int main(void) {
	// your code goes here
	int A,B,C;
	scanf("%d %d %d", &A, &B, &C);
	if(A == B)
	printf("YES");
	else if(B == C)
	printf("YES");
	else if(A == C)
	printf("YES");
	else
        printf("NO");


	return 0;
}
