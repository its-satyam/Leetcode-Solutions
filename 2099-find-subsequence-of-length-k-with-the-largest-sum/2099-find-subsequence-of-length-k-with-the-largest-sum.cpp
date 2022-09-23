class Solution {
public:
    typedef pair<int,int> p;

	vector<int> maxSubsequence(vector<int>& nums, int k) {

		priority_queue<p,vector<p>,greater<p>> pq;

		for(int i=0 ; i<nums.size() ; i++){

			pq.push({nums[i], i});
			if(pq.size() > k){
				pq.pop();
			}
		}


		priority_queue<p,vector<p>,greater<p>> q;
		while(!pq.empty()){

			q.push({pq.top().second, pq.top().first});
			pq.pop();
		}


		vector<int> ans;
		while(!q.empty()){

			ans.push_back(q.top().second);
			q.pop();
		}

		return ans;
    }
};