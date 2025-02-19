#include<stdio.h>
int main(){
  char str1[200];
  int frequency[26]={0};
  printf("Enter a string: ");
  fgets(str1,sizeof(str1),stdin);
  for (int i=0;str1[i]!='\0';i++){
    char ch=str1[i];
    if (str1[i]>='A' && str1[i]<='Z'){
      ch+=32;
    }
    
    if (ch>='a'&& ch<='z'){
      frequency[ch-97]++;
  }
  for (int i=0;i<26;i++){
        if (frequency[i]!=0){
              printf("%c:%d\n",i+97,frequency[i]);
        }
  }
  return 0;
}
 
