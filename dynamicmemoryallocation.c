#include<stdio.h>
#include<stdlib.h>
int main(){
	int *array;
	int n;
	printf("Enter no of element:");
	scanf("%d",&n);
	array= (int *) calloc(n,sizeof(int));
	printf("Enter elements: ");
	
	for (int i=0;i<n;i++){
		scanf("%d",array+i);
	}
	for (int i=0;i<n;i++){
		printf("%d\t\n",*(array+i));
		
	}
	free(array);
	for (int i=0;i<n;i++){
		printf("%d\t\n",*(array+i));
		
	}
	return 0;
}
