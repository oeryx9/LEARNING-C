#include <stdio.h>

int main() {
    int age;
    
    printf("hello world\n");
    
    printf("enter the age;\n");
    scanf("%d",&age);
    
    if(age<=12){
        printf("multiplied by  2 and the answer = %d",age*2);
    }else{
        printf("only the age below 12 is multiplied yours is = %d");
    }
    
    
    
    
    
    
    return 0;
}

