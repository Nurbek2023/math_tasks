#include <stdio.h>

int main()
{
    
    int n = 0;
    float z = 1;
    while (2 * z > z){
        
        
        z = z/10;
        n = n + 1;
    }
    
    printf("Machine zero for float: %d",n);
    
    n = 0;
    double zDouble = 1;
    while (2 * zDouble > zDouble){
        
        
        zDouble = zDouble/10;
        n = n + 1;
    }
    
    printf("\nMachine zero for double: %d",n);
    
    
    n = 0;
    float epsilon = 1;
    
    while(1 + epsilon > 1){
        
        epsilon = epsilon / 10;
        n = n + 1;
    }
    
    printf("\nMachine Epsilon for  float: %d",n);
    
    
    
    n = 0;
    double epsilonDouble = 1;
    
    while(1 + epsilonDouble > 1){
        
        epsilonDouble = epsilonDouble / 10;
        n = n + 1;
    }
    
    printf("\nMachine Epsilon for  double: %d",n);
    
    
    n = 0; 
    float i = 1;
    while (i + 1 > i){
        
        i = 10 * i;
        n = n + 1;
    }
    
    printf("\nFirst senario infinity for float : %d",n);
    
    // second option to get infinity
    
    n = 0;
    i = 1;
    while (2 * i > i){
        
        i = 10 * i;
        n = n + 1;
    }
    
    printf("\nSecond senario infinity for float : %d",n);
    
    n = 0;
    double iDouble = 1;
    while (iDouble + 1 > iDouble){
        
        iDouble = 10 * iDouble;
        n = n + 1;
    }
    
    printf("\nFirst senario infinity for double: %d",n);
    
    n = 0;
    iDouble = 1;
    while (2 * iDouble > iDouble){
        
        iDouble = 10 * iDouble;
        n = n + 1;
    }
    
    printf("\nSecond senario infinity for double: %d",n);

    return 0;
}