class MyCalendarThree {
public:
    struct  Node
    {
        int val;        
        int lazy;
        Node * left;
        Node * right;
    };
    
    Node * createNode()
    {
        Node * node = new Node();
        node->val = 0;
        node->lazy = 0;        
        node->left = NULL;
        node->right = NULL;
        
        return node;
    }
    
    Node * root;
    int LIMIT = 1000000001;
        
    MyCalendarThree() {
        
        root = createNode();
    }
    
    int updateVal(Node * node, int minRange, int maxRange, int low, int high)
    {   
        if(!node->left)node->left=createNode();
        if(!node->right)node->right=createNode();

        if(node->lazy!=0)
        {
            node->val+= node->lazy;
            if(low!=high)
            {
                node->left->lazy += node->lazy;
                node->right->lazy += node->lazy;                
            }
            node->lazy = 0;
        }
        
        if(maxRange < low || minRange > high) return 0;
        
        if(minRange>=low && maxRange<=high)
        {
            node->val++;
            if(low!=high)
            {
                node->left->lazy++;
                node->right->lazy++;
            }
            
            return node->val;
        }
        
        int mid = minRange + (maxRange-minRange)/2;
        
        updateVal(node->left,minRange,mid,low,high);
        updateVal(node->right,mid+1,maxRange,low,high);
                
        return node->val = max(node->left->val,node->right->val);
    }
    
    int maxV = 0;
    int book(int start, int end) {
        
        maxV = max (maxV,updateVal(root,0,LIMIT,start,end-1));
        return maxV;
    }
};


/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */