#include <stdio.h>

int main()
{
  char a[]={'p','r','o','g','r','a','m'};
    int n=7;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || j==n-i-1)
            {
                printf("%c",a[i]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}