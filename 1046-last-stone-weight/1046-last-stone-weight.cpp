class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         priority_queue<int> stoneHeap;
        for(int i:stones){
            stoneHeap.push(i);
        }
        while(true){
            if(stoneHeap.size()==0) return 0;
            if(stoneHeap.size()==1) return stoneHeap.top();
            int curStone = stoneHeap.top();
            stoneHeap.pop();
            int nextStone = stoneHeap.top();
            stoneHeap.pop();
            if(nextStone!=curStone) stoneHeap.push(curStone-nextStone);
        }
        return NULL; 
    }
};