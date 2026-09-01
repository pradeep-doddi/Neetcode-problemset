class node{
    public:
    node*next=nullptr;
    node*prev=nullptr;
    string data;
    node(string data){
        this->data=data;
    }
};

class BrowserHistory {
public:
    node*head=nullptr;
    node*tail=nullptr;
    BrowserHistory(string homepage) {
        head = new node(homepage);
        tail=head;
    }
    
    void visit(string url) {
        node* newnode=new node(url);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    
    string back(int steps) {
        while(steps-- && tail != head){
            tail=tail->prev;
        }
        return tail->data;
    }
    
    string forward(int steps) {
        while(steps-- && tail->next){
            tail=tail->next;
        }
        return tail->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */