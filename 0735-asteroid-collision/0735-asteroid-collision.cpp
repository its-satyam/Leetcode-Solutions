class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
         stack<int> st;
		 for(auto &it: asteroids){
			 bool flag=false;
			   while(it<0 && !st.empty() && st.top()>0){
					   if(abs(it)<=st.top()) {
						   if(abs(it)==st.top())  st.pop();
						   flag=true;  break;
					   }
					   else
						   st.pop();
			   }
			  if(!flag)st.push(it);
		 }

		vector<int> ans;
		while(!st.empty())
		{
			ans.push_back(st.top());
			st.pop();
		}
		reverse(ans.begin(),ans.end());
		return ans;
    }
};