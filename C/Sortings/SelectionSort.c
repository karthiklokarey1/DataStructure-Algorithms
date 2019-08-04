#include <stdio.h>;
void selectionSort(int a[],int n)
{
	int i,j,min_index,temp;
	for(i=0;i<n-1;i++)
	{
	   min_index=i;
	   for(j=i+1;j<n;j++)
	   {
	   	 if(a[j]<a[min_index])  
		   {
		   	  min_index=j;	
		   }		 
	   }
	   temp=a[min_index];
	   a[min_index]=a[i];
	   a[i]=temp;	
	}	
}
int  main()
{
  int n,i;
  printf("Enter the size of the Array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter the Array Elements\n");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);	
  }	
  selectionSort(a,n);
  printf("Result of Selection Sort is \n");
  for(i=0;i<n;i++)
  {
  	printf("%d ",a[i]);
  }
  return 0;
}


/*
  Sorts an array by repeatedly finding minimum element and placing it in the beginning

  Time complexity --   O(n^2)

  Space Complexity -- O(1)

  It never takes more thant O(n) swap operations . Useful when memory write is a costly operation.

  The above implementation is an unstable version of Selection Sort
 */