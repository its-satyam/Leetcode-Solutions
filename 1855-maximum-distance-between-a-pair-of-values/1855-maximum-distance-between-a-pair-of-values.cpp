class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size(), n2=nums2.size(), maxdist=0;
        for(int j=0; j<n2; j++)
        {
            int a=0, b=min(n1-1, j);
            while(a<b){
                int mid=a+(b-a)/2;
                if(nums1[mid]>nums2[j])
                    a=mid+1;
                else
                    b=mid;
            }
            if(nums1[a]<=nums2[j]){
                maxdist=max(maxdist, j-a);
            }
        }
        return maxdist;
    }
};