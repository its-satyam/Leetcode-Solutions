class Solution {
public:
    int nextGreaterElement(int n) {
        //convert n to string
        string number = to_string(n);
		
		//check if next permutation exists
        if(next_permutation(number.begin(),number.end())){
			//if yes convert it to long number
            long long num = stoll(number);
			//return num if it's in range
            if(num <= INT_MAX and num >= INT_MIN)
                return num;
        }
		//return -1
        return -1;
    }
};