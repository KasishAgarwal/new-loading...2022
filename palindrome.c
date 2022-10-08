#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int num,j=0;
    char toString[50],reverse[50];
    
printf("Enter the number to check whether it is palindrome or not :- \n");
scanf("%d",&num);
itoa(num,toString,10);
for(int i=strlen(toString)-1;i>=0;i--,j++){
    reverse[j]=toString[i];
}
reverse[j]='\0';
if(strcmp(reverse,toString)==0)printf("palindrome!");
else printf("Not Palindrome!");

}