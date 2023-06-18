#include<stdio.h>
#include<string.h>
int main(){
    char string[100] ;
    int count = 0;
    printf("Enter the number : ");
    scanf("%[^\n]s", string);

    printf("\n%s\n", string);

    for(int i = 0; i<strlen(string); i++){
        if(string[i]==32){
            count+=1;
        }
    }
    printf("There %d words.", count+1);

}