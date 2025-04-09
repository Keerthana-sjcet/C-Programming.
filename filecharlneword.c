#include <stdio.h>
int main(){
	FILE *fp1;
	char ch;
	fp1=fopen("file1.txt","r");
        int wordcount=0,linecount=0 ,chcount=0;
	while (fscanf(fp1,"%c",&ch)==1){
	  if (ch==' ' || ch=='.'){
	    wordcount+=1;
	  }
	  if (ch=='.'){
	    linecount++;
	  
	  }
	  if (ch !=' ' && ch !='.' && ch!='\n'){
	    chcount++;
	  }
       }
       printf("\nthe no of words %d",wordcount);
       printf("\nthe no of lines %d",linecount);
       printf("\nthe no of characters %d",chcount);
       
       return 0;
        
}	
