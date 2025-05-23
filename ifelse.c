/*#include <stdio.h>

int main() {
    char subject;

    printf("Write the subject you've passed in (m for math, s for science):\n");
    scanf(" %c", &subject);  // Note the space before %c and & before subject

    if (subject == 'm') {
        printf("You passed in math. You have received 15 NPR\n");
    } else if (subject == 's') {
        printf("You passed in science. You have received 15 NPR\n");
    } else if (subject == 'b') {
        printf("You passed in both math and science. You have received 45 NPR\n");
    } else {
        printf("Invalid subject input.\n");
    }

    return 0;
}
*/

#include<stdio.h>
int main(){
    char subject;
    
    printf("write the subject you've passed in or don't write anything you have passed both:\n");
    
    scanf("%c",&subject);
    
    //printf("DON'T WRITE ANYTHING IF YOU HAVE PASSED IN BOTH SUBJECT JUST CLICK ENTER\n");
    
    //printf("your passed subject is :\n");
    
    if(subject == 'm'){
        
        printf("you passed in math and you have received 15 NPR\n");
        
    }else if(subject == 's'){
        
        printf("your passed subject is science you have received 15 NPR\n");
        
    }else{
        printf("your passed subject is math & science you have received 45 NPR\n");
    }
    
    
    
    
    
    
    
    
    return 0;
}