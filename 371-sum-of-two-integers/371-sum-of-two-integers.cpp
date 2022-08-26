class Solution {
public:
    int getSum(int a, int b) {
        int sum;
    
    if(a >= 0 && b >= 0){
      if(b < a) 
          swap(a,b);
      sum = b;
      while(a--) 
          sum++;
    }
    else if(a < 0 && b < 0){
      if(b > a) 
          swap(a,b);
      sum = b;
      while(a++) 
          sum--;
    }
    else{
      if(b >= 0) 
          swap(a,b);
      sum = b;
      while(a--) 
          sum++;
    }
    return sum;
  }
};