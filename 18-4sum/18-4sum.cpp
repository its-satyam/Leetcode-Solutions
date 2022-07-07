class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
    int n = arr.size();
        
        vector<vector<int>> res;
        
        // sort the array
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                // apply the two sum approach on sorted array, i.e. find the no of pairs which has sum == rem_sum
                
                long long rem_sum = (long long) target - (long long) arr[i] - (long long) arr[j];
                
                int low = j + 1;
                
                int high = n - 1;
                
                while(low < high)
                {
                    if(arr[low] + arr[high] == rem_sum)
                    {
                        res.push_back({arr[i], arr[j], arr[low], arr[high]});
                        
                        // skip the duplicates
                        
                        while(low < high && arr[low] == arr[low + 1])
                        {
                            low++;
                        }
                        
                        while(low < high && arr[high] == arr[high - 1])
                        {
                            high--;
                        }
                        
                        low++;
                        
                        high--;
                    }
                    else if(arr[low] + arr[high] < rem_sum)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
                
                // skip the duplicates
                
                while(j < n - 1 && arr[j] == arr[j + 1])
                {
                    j++;
                }
            }
            
            // skip the duplicates
            
            while(i < n - 1 && arr[i] == arr[i + 1])
            {
                i++;
            }
        }
        
        return res;    
    }
};