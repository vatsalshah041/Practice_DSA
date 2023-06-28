#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int q = 0, a = 0;
    printf("enter no. of test cases: \n");
    scanf("%d", &n);
    while (n > 0)
    {
        int m;
        int q1, a1;
        n = n - 1;
        printf("enter the no. of messages: \n");
        scanf("%d", &m);
        char ch[m];
        printf("enter the message: \n");
        for (int i = 0; i < m; i++)
        {
            scanf("%s", &ch[i]);
            if (ch[i] == 'q' || ch[i] == 'Q')
            {
                q = q + 1;
            }
            if (ch[i] == 'a' || ch[i] == 'A')
            {
                a = a + 1;
            }
        }
        if (q>a)
        {
            printf("No \n");
        }
        else
        {
            printf("Yes \n");
            // int c = 0,int f=0;
            // q1 = 0;
            // a1 = 0;
            // while (q1<=a1)
            // {
            //     if (ch[c] == 'q' || ch[c] == 'Q')
            //     {
            //         q1 = q1 + 1;
            //     }
            //     if (ch[c] == 'a' || ch[c] == 'A')
            //     {
            //         a1 = a1 + 1;
            //     }
            //     c=c+1;
            // }
        }
    }
}