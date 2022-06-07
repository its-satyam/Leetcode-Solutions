class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
//         int count1=0;
//         for(int i=0;i<arr1.size();++i)
//         {
//             int count=0;
//             for(int j=0;j<arr2.size();++j)
//             {
//                 if(abs(arr1[i]-arr2[j])<=d)
//                 {
//                     count++;
//                     break;
//                 }
//             }
//             if(count==0){
//                 count1++;
//             }
            
//         }
//         return count1;

        
        set<int> s;
        int n1 = arr1.size(), n2 = arr2.size(), ans = 0;
        for(int i=0; i<n2; i++) 
            s.insert(arr2[i]);
        for(int i=0; i<n1; i++) 
            if(s.lower_bound(arr1[i]-d) == s.upper_bound(arr1[i]+d))
                ans++;
        return ans;
    }
};