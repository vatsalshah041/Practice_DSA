// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char in[100],post[100],st[10];int top=-1;

void push(char ch)
{
    st[++top]=ch;
}
int pop()
{
    char ch=st[top];
    top--;
    return ch;
}
int priority(char ch)
{
    if(ch=='%')
    {return 3;}
    else if(ch=='/'||ch=='*')
    {
        return 2;
    }
    else if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void inf()
{
    int j=0,i=0;char x;char y;
    while(in[i]!='\0')
    {
        x=in[i];
        if(isalpha(x)||isdigit(x))
        {
            post[j]=x;
            j++;
        }
        else if(x=='(')
        {
            push(x);
        }
        else if(x=='+'||x=='-'||x=='*'||x=='%'||x=='/')
        {
            while((top!=-1)&&(priority(x)<=priority(st[top])))
            {
                y=pop();
                post[j]=y;j++;
            }
            push(x);
        }
        else if(x==')')
        {
            y=pop();
            while(y!='(')
            {
                post[j]=y;j++;
                y=pop();
            }
        }
        else
        {
            printf("wrong\n");
        }
        i++;
    }
}
int main() {
    int n;
    printf("enter no:\n");
    scanf("%d",&n);
    printf("enter the infix:\n");
    for(int i=0;i<n+1;i++)
    {
        scanf("%c",&in[i]); 
        printf("%c",in[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%c",in[i]);
    }
    inf();
    for(int i=0;i<n;i++)
{
printf("%d",post[i]);
}
    return 0;
}