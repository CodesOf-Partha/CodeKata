#include <stdio.h>
int main(void) {
	int val,first,second,temp=0,copy,i;
	scanf("%d %d %d",&val,&first,&second);
	copy=val;
		for(i=1;i<200;i++){
			temp=0;copy=val;
			temp=temp+(((first*i)+(second*i))*2);
			copy-=temp;
			printf("=> %d\n",copy);
			if(copy==0)
			{
				printf("YES");
				return 0;	
			}
			if(copy<0){
				printf("NO");
				return 0;
			}
		}
	return 0;
}