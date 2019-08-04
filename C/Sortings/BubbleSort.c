#include <stdio.h>;
void bubbleSort(int a[],int n)
{
	int i,j,flag,temp;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                flag=1;
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
        if(flag==0)
        {
            break;
        }
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
  bubbleSort(a,n);
  printf("Result of Selection Sort is \n");
  for(i=0;i<n;i++)
  {
  	printf("%d ",a[i]);
  }
  return 0;
}


/*
  Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order

  Time complexity --   O(n^2)

  Space Complexity -- O(1)

  Worst time complexity when the array is reverse sorted (O(n^2)) .

  Best time complexity when the array is already sorted (O(n)) .

  In computer graphics it is popular for its capability to detect a very small error (like swap of just two elements) in almost-sorted arrays and fix it with just linear complexity (2n).

 */
