
//This program demonstrate the implelemtation of array with pointer
#include <stdio.h>

void display(int a[], int); //function to display elements of aaray
//main function
int main(int argc, int * argv[]){
	int arr[10];
	int i;
	int *p;
	
	printf("\nEnter the elements of array\n");
	
	for(i=0;i<10;i++)
		scanf("%d", &arr[i]);
	display(arr, 10);	// passing an array in function
		p = arr;	// Assigning starting address of array to pointer variable 
	
	
	printf("\nYou are in Main function:\n");
	for( i=0; i<10;i++)
		printf(" %d ", (*(p+i))*2); // accessing array element through pointer variable
	
	return 0;
}	 

void display(int a[], int len){ 
	int i;
	printf("\nYou are in display function:\n");
	for (i=0; i<len; i++)
		printf(" %d ", a[i]);
	
	}

		
	
