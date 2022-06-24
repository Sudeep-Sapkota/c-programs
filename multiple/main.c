#include <stdio.h>
#include <stdlib.h>
int main()


{
      int a;
      int sum=0;
      int b;
      scanf("%d",&a);
      b=a-1;
        while(b!=0)
        {
            if ( b%3==0||b%5==0)
                {
                sum= sum + b;
                            }
            b=b-1;

        }
          printf("sum of multiple of 3 or 5 is %d",sum);

}
