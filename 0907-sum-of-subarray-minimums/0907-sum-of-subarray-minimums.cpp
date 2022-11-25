class Solution {
public:
    // int sumSubarrayMins(vector<int>& A) {
//         int n = A.size();
//         int MOD = 1e9 + 7;
//         vector<int> left(n), right(n);
//         stack<int>st;
//         st.push(0);
//         left[0] = 1;
//         for(int i=1; i<n; i++)
//         {
//             while(!st.empty() && A[i] < A[st.top()]) 
//                 st.pop();
//             if(st.empty()) 
//                 left[i] = i+1; 
//             else 
//                 left[i] = i - st.top(); 
//             st.push(i);
//         }
//         while(st.size()) 
//             st.pop();
//         st.push(n-1);
//         right[n-1] = 1;
//         for(int i=n-2; i>=0; i--)
//         {
//             while(!st.empty() && A[i] <= A[st.top()]) 
//                 st.pop();
//             if(st.empty()) 
//                 right[i] = n-i; 
//             else 
//                 right[i] = st.top()-i;
//             st.push(i);
//         }
//         for(int i=0; i<n; i++) 
//              cout << left[i] << " : " << right[i] << endl;
//         int res = 0;
//         for(int i=0; i<n; i++)
//         {
//             long long prod = (left[i]*right[i])%MOD;
//             prod = (prod*A[i])%MOD;
//             res = (res + prod)%MOD;
//         }
//         return res%MOD;
//     }
    
        void findsmaller(vector<int>& arr,int n,vector<int>& nse,vector<int>& psoe){
        stack<int>s;
        s.push(0);
        for(int j=1;j<n;j++){
            while(!s.empty() && arr[j]<arr[s.top()]){
                nse[s.top()] = j;
                s.pop();
            }
            s.push(j);
        }
        while(!s.empty()){
            nse[s.top()] = n;
            s.pop();
        }
        s.push(n-1);
        for(int j=n-2;j>=0;j--){
            while(!s.empty() && arr[j]<=arr[s.top()]){
                psoe[s.top()] = j;
                s.pop();
            }
            s.push(j);
        }
        while(!s.empty()){
            psoe[s.top()] = -1;
            s.pop();
        }
    }
    
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n,0),psoe(n,0);
        findsmaller(arr,n,nse,psoe);
        long long sum = 0;
        long long m = 1e9 + 7;
        for(int i=0;i<n;i++){
            int contribution = ((((i-psoe[i])%m * (nse[i]-i)%m)%m) * (arr[i]%m))%m;
            sum = (sum%m + contribution%m)%m;
        }
        return sum;
    }
};