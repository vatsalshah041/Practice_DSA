#include <stdio.h>

int main(void) {
    int n;
	// your code goes here
	scanf("%d",&n);
	while(n>0)
	{
	    int no,ctr=0;
	    scanf("%d",&no);
	    int df[no];

	    for(int i=0;i<no;i++)
	    {
	        scanf("%d",&df[i]);
	        if(df[i]>=1000)
	        {
	            ctr=ctr+1;
	        }
	    }
	    printf("%d \n",ctr);
	    
	    n--;
	}
	return 0;
}

