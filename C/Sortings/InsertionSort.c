#include <stdio.h>;
void insertionSort(int a[],int n)
{
	int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
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
  insertionSort(a,n);
  printf("Result of Insertion Sort is \n");
  for(i=0;i<n;i++)
  {
  	printf("%d ",a[i]);
  }
  return 0;
}


/*
  Sorts an array by taking an element[In incremental order] and placing it in its right position[By moving other elements one index ahead] .

  Time complexity --   O(n^2)

  Space Complexity -- O(1)

  Insertion sort take maximum time when elements are stored in reverse order and minimum time (O(n)) when elements are
  stored in reverse order

  Useful when number of elements is small . It can also be useful when input array is almost sorted(only few elements misplaced in complete big array).

  We can use binary search to reduce the number of comparisions in normal insertion sort. Binary Insertion Sort uses binary search to find the proper location to insert the selected item at each iteration
 */