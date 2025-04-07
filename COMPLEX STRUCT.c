#include<stdio.h>
struct complex{
	float real,imag;
};
struct complex add(struct complex a,struct complex b){
	struct complex result;
	result.real=a.real+b.real;
	result.imag=a.imag+b.imag;
	return result;
}
	
	
int main(){
	struct complex a,b,result;
	printf("Enter real and imaginary parts of 1st number");
	scanf("%f %f",&a.real,&a.imag);
	printf("Enter real and imaginary parts of 2nd number");
	scanf("%f %f",&b.real,&b.imag);
	result=add(a,b);
	printf("%.2f+ %.2f i ",result.real,result.imag);
}
#include<stdio.h>
struct complex{
	float real,imag;
};
struct complex add(struct complex a,struct complex b){
	struct complex result;
	result.real=a.real+b.real;
	result.imag=a.imag+b.imag;
	return result;
}
	
	
int main(){
	struct complex a,b,result;
	printf("Enter real and imaginary parts of 1st number");
	scanf("%f %f",&a.real,&a.imag);
	printf("Enter real and imaginary parts of 2nd number");
	scanf("%f %f",&b.real,&b.imag);
	result=add(a,b);
	printf("%.2f+ %.2f i ",result.real,result.imag);
}
