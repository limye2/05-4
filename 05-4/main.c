//
//  main.c
//  05-4
//
//  Created by MacBook Air on 2023/10/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum = 0;
    int num;
    int i;
    
    printf("input a number:");
    scanf("%d", &num);
    
    for(i=0; i<=num; i++)
    {
        sum = sum + i;
    }
    
    printf("result is %i\n", sum);
    return 0;
}
