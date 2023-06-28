// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	    int t,n,f;
	    scanf("%d",&t);
	    while(t--){
	    scanf("%d", &n);
	    f = n/2;
        //printf("f:%d \n",f);
	    char s[n],a,b;
	    scanf("%s",&s);
	    int c=0;
	    for(int i=0; i<f ;i++)
	   { 
            //printf("Hello");
	     a = s[i];//printf("%c\n",a);
	     b = s[(f+i)];//printf("%c\n",b);
         if(a!=b)
         {
            //printf("%c\n",b);
            //printf("%c\n",a);
            c=1;
         }
	   }
       if(c==0){
        printf("Yes\n");
       }
       else{
        printf("No\n");
       }
        }
	    // printf("%d",strcmp(a,b));
	    // if(strcmp(a,b)==0)
	    // printf("Yes\n");
	    // else 
	    // printf("No\n");
	    // }
	return 0;
}