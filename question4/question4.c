#include <stdio.h>
#include<string.h>

void mystrncpy(char s1[], char s2[], int n);

int main(){
    char s1[10], s2[10]; 
    printf("Enter your s1:");
    scanf("%s", s1);
    printf("Original s1: %s\n", s1);
    printf("Enter your s2:");
    scanf("%s", s2);
    printf("Original s2: %s\n", s2);
    mystrncpy (s1, s2, 10);
    
    printf("New s1: %s\n", s1);
    printf("New s2: %s\n", s2);
    
    return 0;
}

void mystrncpy(char s1[], char s2[], int n){
    char *p;
    for(n=0; n<strlen(s1) ; n++)
    {
        p= &s1[n];
        s2[n]=*p;
    
    }
    return;
}


