class Solution(object):
    def validMountainArray(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        l=len(arr);
        j=0;f=0;
        c=0;
        for i in range(l):
            if(c==0):
                if(arr[i]>=j):
                    j=arr[i];
                    continue;
                else:
                    c=1;
                    j=arr[i];
            else:
                if(arr[i]>arr[i-1]):
                    return False;
        if(f==0):
            return True;
        else:
            return False;