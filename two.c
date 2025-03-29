//let's create a program that calculates the average of different ages:
#include<stdio.h>
int main(){
	int arr[5];
	int i;
	int sum=0;
	int avg;
	printf("Enter the ages of 5 persons:\n");
	printf("Average Age\n");
    for(i=0;i<5;i++){
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+arr[i];
	}
	avg = sum/5;
	printf("The average of 5 persons age is %d",avg);
}
