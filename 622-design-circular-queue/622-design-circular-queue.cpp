class MyCircularQueue {
public:
   int capacity, first, last,size;
  //  MyCircularQueue(int k) {
       vector<int> qu;
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        capacity = k;
        qu = vector<int>(k);
        first = size = 0;
        last = -1; 
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if(!isFull()) {
            //if current last is at position k-1, then we need to insert from beginning.
            if(last == capacity-1) {
                last = 0;
            }
            else
                last++;
            qu[last] = value;
            size++;
            return true;
        }
        return false;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
         if(!isEmpty()) {
            //if the current first is at the position k-1, then next time, the first would be at position 0
            if(first == capacity-1) {
                first = 0;
            }
            else
                first++;
            size--;
            return true;
        }
        return false;
        
    }
        
     /** Get the front item from the queue. */
    int Front() {
        if(isEmpty())
            return -1;
        return qu[first];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if(isEmpty())
            return -1;
        return qu[last];
    }
    
      /** Checks whether the circular queue is empty or not. */   
    bool isEmpty() {
    if(size==0)
            return true;
        return false;    
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        if(capacity == size)
            return true;
        return false;  
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */