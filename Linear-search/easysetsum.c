#include<stdio.h>
#include<malloc.h>



int main() {
	int temp =0,A,C,i,j;
	scanf("%d",&A);
	int *arrA = malloc(sizeof(int)*A);
	for(i=0;i<A;i++)
		scanf("%d",arrA+i);
	scanf("%d",&C);
	int *arrC = malloc(sizeof(int)*C);
	for( i=0;i<C;i++)
		scanf("%d",arrC+i);
	int *arrB = malloc(sizeof(int)*101);

 for(i=0;i<C;i++)
 {
		for(j=0;j<A;j++)
		{
			temp = arrC[i]-arrA[j];
			//printf("b %d ",temp);
			if(temp>=0)
			{
			arrB[temp]++;
			}
			//printf("c %d ",temp);

		}
 }

  for( i=0;i<101;i++)
	{
		if(arrB[i]==A)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
