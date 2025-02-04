#include<stdio.h>
int main(){
    int noofelements,number,i;
    printf("enter no of elements in array");
    scanf("%d",&noofelements);
    int array[noofelements];
    printf("enter elements in the array");
    for (i=0;i<noofelements;i++){
        scanf("%d",&[i]);
    }
    printf(" Enter number to search for");
    scanf("%d",&number);
    for (i=0;i<noofelements;i++){
        if( array[i]==number){
            printf("Position is at %d",i+1);
        }
    }       
    return 0;
}
