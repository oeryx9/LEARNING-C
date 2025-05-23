#include<stdio.h>
int main(){
    int marks;
    
    printf("enter the marks of the student:\n");
    scanf("%d",&marks);
    
    if(marks>=90){
        
        printf("student has passed in A division");
    }else if(marks>=50){
        printf("student has secure B division");
        
    }else if(marks>=30){
        
        printf("student has secure C divison");
        
        
    }else{
        printf("student must reads carefully");
        
    }
    
        
    
        

    
    
    
    
    
    
    
    
    
    
    return 0;

}