#include <bits/stdc++.h>
using namespace std;

class Node
{
    int info;
    Node * next;
    Node * start;
    Node * end;
    int length;
    public:
    Node (){
        start = end = NULL;
        length = 0;
    }
    Node * Create_New_Node(int n){
        Node *ptr = new Node;
        ptr -> info=n;
        ptr -> next = NULL;
        return ptr;
    }
    void push(int n){
        Node * new_ptr = Create_New_Node(n);
        if(!start){
            end = start = new_ptr;
        }
        else{
             end->next = new_ptr;
             end = new_ptr;
        }
        length++;
    }
    void pop(){
        if(!start) {
            cout<<"Underflow";
            return;
        }
        else{
            start = start->next;
            length--;
        }

    }
    int front(){
        if(start) return start->info;
        return 0;
    }
    bool isEmpty(){
        if(!start) return true;
        else return false;
    }
    int size(){
        return length;
    }
};
int main(){
    Node q;
    q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}


