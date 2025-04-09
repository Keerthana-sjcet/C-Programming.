#include <stdio.h>
void readFile(FILE *fp){
  int no;
  while (fscanf(fp,"%d",&no)==1){
    printf("%d\t",no);
  }
  fclose(fp);
}
int main(){
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("nos.txt","r");
	fp2=fopen("oddnos.txt","w");
	fp3=fopen("evenos.txt","w");
	int no;
	while (fscanf(fp1,"%d",&no)==1){
	  if(no%2==0){
              fprintf(fp3,"%d\t",no);
          }
          else{
              fprintf(fp2,"%d\t",no);
          }
        }
        fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	printf("The file contents are:\n");
	fp1=fopen("nos.txt","r");
	readFile(fp1);
	printf("\nOdd nos are:\n");
	fp2=fopen("oddnos.txt","r");
	readFile(fp2);
	printf("\neven nos are:\n");
	fp3=fopen("evenos.txt","r");
	readFile(fp3);
	return 0;
}	
