#include <stdio.h>

int main(void) {
	int num,copy,sum=0,var;
	scanf("%d",&num);
	copy=num;
	while(copy!=0){
		var=copy%10;
		sum+=(var*var);
		copy/=10;
	}
	printf("%d",sum);
	return 0;
}
