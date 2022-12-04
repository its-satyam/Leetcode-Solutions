class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> v(n);
        // int f=0,l=0,sumf=0,suml=0,mini=INT_MAX,ans=0;
        // if(n==1)
        //     return 0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<=i;j++)
        //         sumf+=nums[j];
        //     f=sumf/i+1;
        //     for(int j=i+1;j<n;j++)
        //         suml+=nums[j];
        //     l=suml/n-1-i;
        //     v[i]=abs(f-l);
        //     if(v[i]<mini)
        //     {
        //         mini=v[i];
        //         ans=i;
        //     }
        // }
        // return ans; 
        
        long long int right_sum=0;
		long long int left_sum=0;
        for(auto v:nums) right_sum+=v;
		
        int n=nums.size();
        if(n==1) return 0;
		
        int ind, g_min=INT_MAX;
		
        for(int i=0; i<n; i++){
            left_sum+=nums[i];
            right_sum-=nums[i];
            
            int left_avg=left_sum/(i+1);
            int right_avg;
            
            if(i!=n-1){
                right_avg=right_sum/(n-i-1);
            }else{
                right_avg=0;
            }
            
            int diff=abs(right_avg-left_avg);
            
            if(diff<g_min){
                ind=i;
                g_min=diff;
            }
        }
        return ind;
    }
};