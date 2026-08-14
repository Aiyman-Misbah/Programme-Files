// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//       for (int i = 1; i <= n; i++)
//         {
//             long long int a,b,c;
//             scanf("%lld %lld %lld", &a, &b, &c);
//             printf("Case %d :", i);
//             if(a+b<=c || b+c<=a || c+a<=b){

//                 printf("Invalid\n");
//             }
//             else if (a == b && b == c)
//             {
//                 printf("Equilateral\n");
//             }
//             else if (a == b || b == c || a == c)
//             {
//                 printf("Isosceles\n");
//             }
//             else if (a != b && b != c && a != c)
//             {
//                 printf("Scalene\n");
//             }
//             else
//             {

//                 return 0;
//             }
//         }
    
    

//     return 0;
// }

#include <stdio.h>

int main() {
    int T,c;
    scanf("%d", &T);

    for (c = 1; c <= T; c++) {
        long long a, b, d;
        scanf("%lld %lld %lld", &a, &b, &d);

        printf("Case %d: ", c);

        if (a + b <= d || a + d <= b || b + d <= a) {
            printf("Invalid\n");
        }
        else if (a == b && b == d) {
            printf("Equilateral\n");
        }
        else if (a == b || a == d || b == d) {
            printf("Isosceles\n");
        }
        else {
            printf("Scalene\n");
        }
    }

    return 0;
}