#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int andRes, orRes, xorRes;
    int temp = 0;
    int oper = 0;

    for (int i = 1; i < n; i++)
    {
        oper = i + 1;
        while(oper < n + 1){
            temp = i & oper;
            if (temp > andRes && temp < k){ // stores max in andRes
                andRes = temp;
            }
            oper++;
        }
    }
    
    printf("%d\n", andRes);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
