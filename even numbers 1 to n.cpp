#include <stdio.h>

int main()  
{  
    int num, count = 1, sum = 0;  
 
    printf("Enter a integer number\n");  
    scanf("%d", &num);  
 
    while(count <= num)  
    {  
        if(count%2 == 0)  
        {  
            sum = sum + count;  
        }  
        count++;  
    }  
 
    printf("Sum of even integer number is %d\n", sum);  
 
    return 0;
}