class Solution {
public:
    int bitwiseComplement(int n) 
    {
        int mask=0;
        int copyNum=n;
        int ans=0;
        if(n==0)
            return 1;
        while(copyNum!=0)
        {
            copyNum=copyNum>>1;
            mask = mask <<1;
            mask = mask  | 1;
        }
        n = ~n;
        ans = mask & n;
        return ans;
    }
};
