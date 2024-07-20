#  https://www.hackerrank.com/challenges/hello-world-c/problem?isFullScreen=true

#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    scanf("%[^\n]%*c",s);
    printf("Hello, World!\n");
    printf("%s\n",s);
    
    return 0;
}
