#include<iostream>
using namespace std;
int total,n,c,a[10],i,sum;
int main()
{
    scanf("%d",&total);
    while(total--)
    { 
              scanf("%d%d",&n,&c);
              sum=0;
              for(i=0;i<n;i++)
              {
                    scanf("%d",&a[i]);
                    sum+=a[i];
              }
              if(sum<=c)
                printf("Yes\n");
              else
                printf("No\n");          
    }
}
