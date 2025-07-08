#include <stdio.h>
int main()
{
    int a=0, b=1, n, i, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("%d\n%d\n", a, b);
    for(i=3; i<=n; i++)
    {
        next = a + b;
        printf("%d\n", next);
        a = b;
        b = next;
    }
    return 0;
}
