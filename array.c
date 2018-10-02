#include <stdio.h>

void display(int a[], int);
int main(){
	int arr[10];
	int i;
	int *p;
	
	printf("\nEnter the elements of array\n");
	
	for(i=0;i<10;i++)
		scanf("%d", &arr[i]);
	display(arr, 10);// passing an array in function
		p = arr;
	printf("\nYou are in Main function:\n");
	for( i=0; i<10;i++)
		printf(" %d ", (*(p+i))*2);
	
	return 0;
}	 

void display(int a[], int len){
	int i;
	printf("\nYou are in display function:\n");
	for (i=0; i<len; i++)
		printf(" %d ", a[i]);
	
	}

		
	
