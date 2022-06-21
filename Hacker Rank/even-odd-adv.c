#include <stdio.h>
#include <string.h>

int main() 
{
    int a, b,i, ind;
    char str[12][10] = {"one","two","three","four","five","six","seven","eight","nine","even", "odd"};
    scanf("%d\n%d", &a, &b);
    for(i=a;i<=b;i++)
    {
        ind = i<=9 ? i-1 : 9 + i%2;
        printf("%s\n",str[ind]);
    }


    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
//     int a, b;
//     scanf("%d\n%d", &a, &b);
    
//     char labels[11][6] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
//     int labels_index;
//       for (int i=a; i<=b; i++) {
//         labels_index = i <= 9 ? i - 1 : 9 + i % 2;
//         printf("%s\n", labels[labels_index]);
//     }

//     return 0;
// }
