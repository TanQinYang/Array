#include <stdio.h>
#include <stdlib.h>

int main()
/*{
int  a[10]={25,69,54,8,77,6,29,10,3,98};
double array[10];
int i;
  for (i=0;i<10;i=i+1)
 printf("%d\n",a[4]);
    return 0;
}
*/
{
int a[10];
int i;
printf("Pls enter 10 numbers:");
for (i=0;i<9;i=i+1)
    scanf("%d\n",&a[i]);
for(i=0;i<9;i=i+1)
    printf("%d\n",a[i]);

    return 0;
}
