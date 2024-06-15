//2535
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int t1=0,t2=0,temp=0,n=0,r=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            t1+=nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>9)
            {
                n=nums[i];
                count=0;
                while(n!=0)//15  1
                {
                    r=n%10;//5 
                    count+=r;//5
                    n=n/10;//1

                }
                t2=t2+(t1+count-nums[i]);
            }
            else 
            temp++;
        }
        if(temp==nums.size())
            t2=t1;

        return ((t1>=t2)?(t1-t2):(t2-t1));
    }
};