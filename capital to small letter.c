#include<stdio.h>
int main(){
	char value;
	printf("enter capital letter");
	value=getchar();
	value=value+32;
	printf("%c",value);
	return 0;
}
