#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    float a, b;
    while(1)
    {
        scanf("%c", &c);
        if(c == 'q')
            break;

        scanf("%f", &a);

        scanf("%f", &b);

        getchar();

        switch(c)
        {
        case '+':
            printf("%f\n", a + b);
            break;
        case '-':
            printf("%f\n", a - b);
            break;
        case '*':
            printf("%f\n", a * b);
            break;
        case '/':
            printf("%f\n", a / b);
            break;
        default:
            break;
        }
    }
    return 0;
}
