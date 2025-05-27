#include <stdio.h>

int main() {
    int age,date;
    printf("enter the age:\n");
    scanf("%d",&age);
    
    printf("enter the marks:\n");
    scanf("%d",&date);
    
    switch(age){
        
        case 1:
        printf("please enter the date:\n");
        
        switch(date){
            case 2062:
            printf("you cant vote\n");
            break;
            
            case 2062-1:
            printf("you can vote\n");
            break;
            
            default:
            printf("date must be greater than 2062 for voting");
            break;
            
        }
        break;
        
        case 2:
        printf("you can vote\n");
        break;
        
        default:
        printf("you can vote b\n");
        
        break;
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;

}

