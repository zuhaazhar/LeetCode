class MyCircularQueue {
    struct node{
        int val;
        node* next;
        node(int n) : val(n), next(nullptr){}
    };

    node* head;
    node* tail;
    int size, cap;

public:
    MyCircularQueue(int k) : head(nullptr), tail(nullptr), size(0), cap(k) {}
    
    bool enQueue(int value) {
        if(isFull())
            return false;
        node* n=new node(value);
        if(isEmpty())
            head=tail=n;
        else{
            tail->next=n;
            tail=n;
        }
        tail->next=head;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())
            return false;
        if(size==1){
            delete head;
            head=tail=nullptr;
        }
        else{
            node* temp=head;
            head=head->next;
            tail->next=head;
            delete temp;
        }
        size--;
        return true;
    }
    
    int Front() {
        return isEmpty()? -1: head->val;
    }
    
    int Rear() {
        return isEmpty()? -1 : tail->val;
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==cap;
    }

    ~MyCircularQueue() {
        while (!isEmpty()) deQueue();
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