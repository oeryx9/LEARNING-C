#include <stdio.h>

int main(){
    int age,marks;
    

    
    printf("enter the age:\n");
    scanf("%d",&age);
    
    printf("enter the marks:\n");
    scanf("%d",&marks);
    
    
    switch(age){
        
        case 23:
        printf("the age is 23\n");
        
        switch(marks){
            case 45:
            printf("the student with age 23 achieve marks= %d",marks);
            break;
            
            default:
            printf("the student with the age 23 achieve marks %d",marks);
            break;
            
        
        }
        break;
        
        
        case 21:
        printf("the age is 21\n");
        
        switch(marks){
            case 67:
            
            
            printf("the student with the age 21 achieve marks %d",marks);
            break;
            default:
            printf("the student with the age 21 achieve marks %d,",marks);
            break;
        
        }
        
        break;
        
        default:
        printf("age no else 23 and 21 the age is %d\n");
        
        
        
        
        
    }
    
    
    
    
    
    return 0;
    
}

